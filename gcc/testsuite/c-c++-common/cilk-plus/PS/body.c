/* { dg-do compile } */
/* { dg-options "-fcilkplus -fopenmp" } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
/* { dg-require-effective-target fopenmp } */
>>>>>>> gcc-mirror/master
=======
/* { dg-require-effective-target fopenmp } */
>>>>>>> gcc-mirror/master
=======
/* { dg-require-effective-target fopenmp } */
>>>>>>> master
=======
/* { dg-require-effective-target fopenmp } */
>>>>>>> gcc-mirror/trunk
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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	__builtin_setjmp (jmpbuf); /* { dg-error "calls to setjmp are not allowed" } */
=======
	__builtin_setjmp (jmpbuf); /* { dg-error "setjmp" } */
>>>>>>> gcc-mirror/master
=======
	__builtin_setjmp (jmpbuf); /* { dg-error "setjmp" } */
>>>>>>> gcc-mirror/master
=======
	__builtin_setjmp (jmpbuf); /* { dg-error "setjmp" } */
>>>>>>> master
=======
	__builtin_setjmp (jmpbuf); /* { dg-error "setjmp" } */
>>>>>>> gcc-mirror/trunk
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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	break; /* { dg-error "break statement within" } */
=======
	break; /* { dg-error "break statement " } */
>>>>>>> gcc-mirror/master
=======
	break; /* { dg-error "break statement " } */
>>>>>>> gcc-mirror/master
=======
	break; /* { dg-error "break statement " } */
>>>>>>> master
=======
	break; /* { dg-error "break statement " } */
>>>>>>> gcc-mirror/trunk
=======
	break; /* { dg-error "break statement " } */
>>>>>>> gcc-mirror/master
    }

#pragma simd
  for (int i=0; i < 1000; ++i)
    {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#pragma omp for /* { dg-error "OpenMP statements are not allowed" } */
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> gcc-mirror/master
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> gcc-mirror/master
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> master
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> gcc-mirror/trunk
=======
#pragma omp for /* { dg-error "OpenMP constructs other than" } */
>>>>>>> gcc-mirror/master
      for (j=0; j < 1000; ++j)
	a[i] = b[i];
    }
}
