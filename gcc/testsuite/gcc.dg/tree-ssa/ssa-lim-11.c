/* { dg-do compile } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-options "-O -fprofile-arcs -fdump-tree-lim1-details" } */
=======
/* { dg-options "-O -fprofile-arcs -fdump-tree-lim2-details" } */
>>>>>>> gcc-mirror/master
=======
/* { dg-options "-O -fprofile-arcs -fdump-tree-lim1-details" } */
>>>>>>> master
=======
/* { dg-options "-O -fprofile-arcs -fdump-tree-lim2-details" } */
>>>>>>> gcc-mirror/trunk
/* { dg-require-profiling "-fprofile-generate" } */

struct thread_param
{
  long* buf;
  long iterations;
  long accesses;
} param;

void access_buf(struct thread_param* p)
{
  long i,j;
  long iterations = p->iterations;
  long accesses = p->accesses;
  for (i=0; i<iterations; i++)
    {
      long* pbuf = p->buf;
      for (j=0; j<accesses; j++)
	pbuf[j] += 1;
    }
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "Executing store motion of __gcov0.access_buf\\\[\[01\]\\\] from loop 1" 2 "lim1" } } */
=======
/* { dg-final { scan-tree-dump-times "Executing store motion of __gcov0.access_buf\\\[\[01\]\\\] from loop 1" 2 "lim2" } } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-times "Executing store motion of __gcov0.access_buf\\\[\[01\]\\\] from loop 1" 2 "lim1" } } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "Executing store motion of __gcov0.access_buf\\\[\[01\]\\\] from loop 1" 2 "lim2" } } */
>>>>>>> gcc-mirror/trunk
