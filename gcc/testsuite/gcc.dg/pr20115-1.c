/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-dom2" } */

extern int foo (void) __attribute__((pure));

int bar()
{
  int a = foo ();
  a += foo ();
  return a;
}

/* Check that we only have one call to foo.  */
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "foo" 1 "dom1" } } */
=======
/* { dg-final { scan-tree-dump-times "foo" 1 "dom2" } } */
>>>>>>> gcc-mirror/master
