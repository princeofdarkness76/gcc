/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-dce2" } */

void foo (void);
<<<<<<< HEAD

void foo (void);

void foo (void);
=======
>>>>>>> gcc-mirror/trunk

void
bar (int i, int partial, int args_addr)
{
  int offset = 0;
  if (args_addr == 0)
    offset = 0;
  if (i >= offset)
    foo ();
}

/* There should be only one IF conditional since the first does nothing
   useful.  */
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "if " 1 "dce1"} } */
<<<<<<< HEAD
=======
/* { dg-final { scan-tree-dump-times "if " 1 "dce2"} } */
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "if " 1 "dce2"} } */
>>>>>>> gcc-mirror/trunk
