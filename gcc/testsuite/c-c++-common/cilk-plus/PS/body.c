/* { dg-do compile } */
/* { dg-options "-fcilkplus -fopenmp" } */
<<<<<<< HEAD
=======
/* { dg-require-effective-target fopenmp } */
>>>>>>> gcc-mirror/master

int *a, *b, c;
void *jmpbuf[10];

void foo()
{
  int j;

#pragma simd
  for (int i=0; i < 1000; ++i)
    {
      if (c == 6)
<<<<<<< HEAD
	__builtin_setjmp (jmpbuf); /* { dg-error "calls to setjmp are not allowed" } */
=======
	__builtin_setjmp (jmpbuf); /* { dg-error "setjmp" } */
>>>>>>> gcc-mirror/master
      a[i] = b[i];
    }

#pragma simd
  for (int i=0; i < 1000; ++i)
    {
      if (c==5)
<<<<<<< HEAD
	break; /* { dg-error "break statement within" } */
=======
	break; /* { dg-error "break statement " } */
>>>>>>> gcc-mirror/master
    }

#pragma simd
  for (int i=0; i < 1000; ++i)
    {
<<<<<<< HEAD
#pragma omp for /* { dg-error "OpenMP statements are not allowed" } */
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> gcc-mirror/master
      for (j=0; j < 1000; ++j)
	a[i] = b[i];
    }
}
