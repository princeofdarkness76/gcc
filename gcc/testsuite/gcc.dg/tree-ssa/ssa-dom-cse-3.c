/* { dg-do run } */
<<<<<<< HEAD
/* { dg-options "-O -fno-tree-fre -fdump-tree-dom1" } */
=======
/* { dg-options "-O -fno-tree-fre -fdump-tree-dom2" } */
>>>>>>> gcc-mirror/master

extern void abort (void);

int a;
int __attribute__((noinline))
foo (int b)
{
  a = 0;
  if (b)
    {
      a = 1;
      return a;
    }
  /* DOM should be able to CSE both loads here, forwarding 0 and 1
     to the PHI feeding the return.  */
  return a;
}

int
main()
{
  if (foo (0) != 0
      || foo (1) != 1)
    abort ();
  return 0;
}

<<<<<<< HEAD
/* { dg-final { scan-tree-dump "= PHI <\[01\]\\\(.\\\), \[01\]\\\(.\\\)>" "dom1" } } */
=======
/* { dg-final { scan-tree-dump "= PHI <\[01\]\\\(.\\\), \[01\]\\\(.\\\)>" "dom2" } } */
>>>>>>> gcc-mirror/master
