/* { dg-do compile } */
/* { dg-options "-O3 -fcilkplus" } */

<<<<<<< HEAD
<<<<<<< HEAD
#pragma simd		/* { dg-error "must be inside a function" } */

void foo()
{
=======
=======
>>>>>>> gcc-mirror/master
int *a, *c;

void foo()
{
  int i, j;

  // Pointers are OK.
  #pragma simd
  for (int *i=c; i < c; ++i)
    *a = '5';
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> gcc-mirror/master
}
