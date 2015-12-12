/* { dg-do compile } */
/* { dg-options "-O2 -fdump-tree-lim2-details" } */

struct Foo
{
  Foo();
  Foo(const Foo&);
  int n;
  int * __restrict__ p;
};
void bar(Foo f, int * __restrict__ q)
{
  for (int i = 0; i < f.n; ++i)
    {
      *q += f.p[i];
    }
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump "Executing store motion" "lim1" } } */
<<<<<<< HEAD
=======
/* { dg-final { scan-tree-dump "Executing store motion" "lim2" } } */
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
/* { dg-final { scan-tree-dump "Executing store motion" "lim2" } } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-final { scan-tree-dump "Executing store motion" "lim2" } } */
>>>>>>> gcc-mirror/master
