/* { dg-do compile } */ 
<<<<<<< HEAD
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
=======
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom2-stats" } */
>>>>>>> gcc-mirror/master

void foo();
void bla();

/* In the following case, we should be able to thread edge through
   the loop header.  */

void thread_latch_through_header (void)
{
  int i = 0;
  int first = 1;

  do
    {
      if (first)
	foo ();

      first = 0;
      bla ();
    } while (i++ < 100);
}

/* Threading the latch to a later point in the loop is safe in this
   case.  And we want to thread through the header as well.  These
   are both caught by threading in DOM.  */
<<<<<<< HEAD
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
=======
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom2"} } */
>>>>>>> gcc-mirror/master
/* { dg-final { scan-tree-dump-times "Jumps threaded: 2" 1 "vrp1"} } */
