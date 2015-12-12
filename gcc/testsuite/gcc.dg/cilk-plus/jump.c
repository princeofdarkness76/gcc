/* { dg-do compile } */
/* { dg-options "-fcilkplus" } */

int *a, *b, c;

void foo()
{
#pragma simd
  for (int i=0; i < 1000; ++i)
    {
      a[i] = b[i];
      if (c == 5)
<<<<<<< HEAD
<<<<<<< HEAD
	return;	 /* { dg-error "invalid branch to.from a Cilk" } */
=======
	return; /* { dg-error "invalid branch to/from Cilk Plus structured block" } */
>>>>>>> gcc-mirror/master
=======
	return; /* { dg-error "invalid branch to/from Cilk Plus structured block" } */
>>>>>>> gcc-mirror/master
    }
}

void bar()
{
#pragma simd
  for (int i=0; i < 1000; ++i)
    {
    lab:
      a[i] = b[i];
    }
  if (c == 6)
<<<<<<< HEAD
<<<<<<< HEAD
    goto lab; /* { dg-error "invalid entry to Cilk Plus" } */
=======
    goto lab; /* { dg-error "invalid entry to Cilk Plus structured block" } */
>>>>>>> gcc-mirror/master
=======
    goto lab; /* { dg-error "invalid entry to Cilk Plus structured block" } */
>>>>>>> gcc-mirror/master
}
