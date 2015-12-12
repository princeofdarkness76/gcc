/* { dg-do compile } */
<<<<<<< HEAD
/* { dg-options "-O2 -fdump-tree-ch-details" } */
=======
/* { dg-options "-O2 -fdump-tree-ch2-details" } */
>>>>>>> gcc-mirror/master

int mymax2(int *it, int *end)
{
  int max = *it;
  while (++it != end)
    if (*it > max)
      max = *it;
  return max;
}

<<<<<<< HEAD
/* { dg-final { scan-tree-dump "Duplicating header" "ch" } } */
=======
/* { dg-final { scan-tree-dump "Duplicating header" "ch2" } } */
>>>>>>> gcc-mirror/master
