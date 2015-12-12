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

void bla();

/* In the following case, we should be able to thread edge through
   the loop header.  */

void thread_entry_through_header (void)
{
  int i;

  for (i = 0; i < 170; i++)
    bla ();
}

/* There's a single jump thread that should be handled by the VRP
   jump threading pass.  */
/* { dg-final { scan-tree-dump-times "Jumps threaded: 1" 1 "vrp1"} } */
/* { dg-final { scan-tree-dump-times "Jumps threaded: 2" 0 "vrp1"} } */
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
