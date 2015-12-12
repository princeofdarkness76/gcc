/* { dg-do compile } */ 
/* { dg-options "-O2 -fdump-tree-ch2-details" } */

extern int foo (int);

void bla (void)
{
  int i, n = foo (0);

  for (i = 0; i < n; i++)
    foo (i);
}

/* There should be a header duplicated.  */
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "Duplicating header" 1 "ch"} } */
=======
/* { dg-final { scan-tree-dump-times "Duplicating header" 1 "ch2"} } */
>>>>>>> gcc-mirror/master
