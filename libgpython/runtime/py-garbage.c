/* This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdarg.h>
#include <stdbool.h>

#include <gmp.h>
#include <mpfr.h>

#include <gpython/gpython.h>
#include <gpython/objects.h>
#include <gpython/vectors.h>
#include <gpython/garbage.h>

gpy_vector_t * gpy_garbage_vec;

void gpy_garbage_invoke (void)
{
  if( gpy_garbage_vec )
    {
      debug("garbage collector running...\n");
      gpy_object_t * p_obj = NULL_OBJECT;

      while ((p_obj = (gpy_object_t *)
	      gpy_vec_pop( gpy_garbage_vec )))
	{
	  gpy_garbage_free_obj( p_obj );
	}
      gpy_vec_free( gpy_garbage_vec );
      gpy_garbage_vec = NULL;
    }
}

void gpy_garbage_mark_obj__ (gpy_object_t * const sym)
{
  if( sym )
    {
      if( gpy_garbage_vec )
        {
	  gpy_vec_push( gpy_garbage_vec, sym );
        }
      else
        {
          gpy_garbage_vec = (gpy_vector_t *)
            gpy_malloc( sizeof(gpy_vector_t) );
          gpy_vec_init( gpy_garbage_vec );

          gpy_vec_push( gpy_garbage_vec, sym );
        }
    }
}

void gpy_garbage_invoke_sweep (gpy_vector_t * const context)
{
  signed long ctx_l = context->length;
  if( context )
    {
      debug("sweeping context table for garbage length <%i>...\n", ctx_l);
      gpy_hash_tab_t * ctx_idx = NULL;
      signed long idx = (ctx_l - 1);

      while (idx >= 0)
	{
	  ctx_idx = context->vector[ idx ];
	  gpy_hash_entry_t * s_arr = ctx_idx->array;

	  int i = 0; int len = (ctx_idx->length);
	  debug("table length <%i>!\n", len );
	  for( ; i<len; ++i )
	    {
	      gpy_hash_entry_t oe = s_arr[i];
	      if (oe.data)
		{
		  gpy_object_t * o = oe.data;
		  gpy_assert (o->T == TYPE_OBJECT_STATE);
		  debug ("object <%p> has ref count <%i>!\n",
			 (void *) o, o->o.object_state->ref_count);
		  
		  // If no references remain
		  if (o->o.object_state->ref_count <= 0)
		    {
		      gpy_garbage_mark_obj( o );
		      s_arr[i] = (gpy_hash_entry_t) { 0, NULL };
		    }
		}
	    }
	  idx--;
	}
    }
  gpy_garbage_invoke ();
}

void gpy_garbage_free_obj (gpy_object_t * x)
{
  gpy_assert(x);
  debug("deleting garbage object <%p>!\n", (void*)x );
  
  switch (x->T)
    {
    case TYPE_OBJECT_LIT:
      break;

    case TYPE_OBJECT_STATE:
      break;

    case TYPE_NULL:
      break;
    }

  gpy_free (x);
}

/* Cleanup the program for exit! */
void gpy_cleanup (void)
{
  debug("cleanup.......\n");

  gpy_garbage_invoke_sweep (gpy_namespace_vec);

  gpy_vec_free (gpy_primitives);
  gpy_vec_free (gpy_namespace_vec);

  mpfr_free_cache ();
}
