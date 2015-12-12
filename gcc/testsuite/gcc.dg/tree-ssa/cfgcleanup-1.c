/* { dg-do compile } */ 
/* { dg-options "-O2 -fdump-tree-dce2" } */
void
cleanup (int a, int b)
{
  if (a)
    if (b)
      a = 1;
    else
      b = 1;
  else if (a)
    a = 1;
  else
    b = 1;
  return;
}
/* Dce should get rid of the initializers and cfgcleanup should elliminate ifs  */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "if " 0 "dce1"} } */
<<<<<<< HEAD
=======
/* { dg-final { scan-tree-dump-times "if " 0 "dce2"} } */
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "if " 0 "dce2"} } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-final { scan-tree-dump-times "if " 0 "dce2"} } */
>>>>>>> gcc-mirror/master
