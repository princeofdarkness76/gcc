/* { dg-do compile } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-options "-O -fdump-tree-lim1-details" } */
=======
/* { dg-options "-O -fdump-tree-lim2-details" } */
>>>>>>> gcc-mirror/master
=======
/* { dg-options "-O -fdump-tree-lim1-details" } */
>>>>>>> master
=======
/* { dg-options "-O -fdump-tree-lim2-details" } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-options "-O -fdump-tree-lim2-details" } */
>>>>>>> gcc-mirror/master

void bar (int);
void foo (int n, int m)
{
  unsigned i;
  for (i = 0; i < n; ++i)
    {
      int x;
      if (m < 0)
	x = 1;
      else
	x = m;
      bar (x);
    }
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "Moving PHI node" 1 "lim1"  } } */
=======
/* { dg-final { scan-tree-dump-times "Moving PHI node" 1 "lim2"  } } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-times "Moving PHI node" 1 "lim1"  } } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "Moving PHI node" 1 "lim2"  } } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-final { scan-tree-dump-times "Moving PHI node" 1 "lim2"  } } */
>>>>>>> gcc-mirror/master
