// { dg-do run }
// { dg-set-target-env-var OMP_CANCELLATION "true" }

#include <unistd.h>
#include <omp.h>
#include "cancel-test.h"

static void
foo (int *x)
{
  S a, b, c;
  #pragma omp parallel firstprivate(x, c) num_threads (32) private (b)
  {
    S d;
    b.bump ();
    c.bump ();
    int thr = omp_get_thread_num ();
    switch (x[thr])
      {
<<<<<<< HEAD
<<<<<<< HEAD
      case 4:
=======
      case 4:;
>>>>>>> gcc-mirror/master
=======
      case 4:
>>>>>>> master
	#pragma omp cancel parallel
	break;
      case 3:
	#pragma omp task
	usleep (1000);
	#pragma omp task
	usleep (2000);
	#pragma omp task
	usleep (4000);
	break;
      case 2:
	usleep (1000);
	/* FALLTHRU */
<<<<<<< HEAD
<<<<<<< HEAD
      case 1:
=======
      case 1:;
>>>>>>> gcc-mirror/master
=======
      case 1:
>>>>>>> master
	#pragma omp cancellation point parallel
	break;
      }
    #pragma omp barrier
    if (omp_get_cancellation ())
      abort ();
  }
}

int
main ()
{
  int i, j, x[32] = { 0, 1, 2, 4, 2, 2, 1, 0 };
  foo (x);
  for (i = 0; i < 32; i++)
    {
      for (j = 0; j < 32; j++)
	x[j] = rand () & 3;
      x[rand () & 31] = 4;
      foo (x);
    }
  S::verify ();
}
