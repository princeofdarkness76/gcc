/* { dg-do compile } */ 
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom1-stats" } */
=======
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom2-stats" } */
>>>>>>> gcc-mirror/master
=======
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom1-stats" } */
>>>>>>> master
=======
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom2-stats" } */
>>>>>>> gcc-mirror/trunk

void foo();
void bla();
void bar();

/* Avoid threading in this case, in order to avoid creating loop with
   multiple entries.  */

void dont_thread_4 (int a, int nfirst)
{
  int i = 0;
  int first;

  if (a)
    first = 0;
  else
    first = 1;

  do
    {
      if (first)
	foo ();
      else
	bar ();

      first = nfirst;
      bla ();
    } while (i++ < 100);
}

/* { dg-final { scan-tree-dump-not "Jumps threaded" "vrp1"} } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom1"} } */
=======
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom2"} } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom1"} } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom2"} } */
>>>>>>> gcc-mirror/trunk
