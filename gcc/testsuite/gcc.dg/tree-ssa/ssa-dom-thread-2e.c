/* { dg-do compile } */ 
<<<<<<< HEAD
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom1-stats" } */
=======
/* { dg-options "-O2 -fdump-tree-vrp1-stats -fdump-tree-dom2-stats" } */
>>>>>>> gcc-mirror/master

void foo();
void bla();
void bar();

void dont_thread_3 (int nfirst)
{
  int i = 0;
  int first = 0;

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

/* Threading through the loop header is not safe here.  Peeling off
   the first iteration then unswitching the loop would be safe.  */
/* { dg-final { scan-tree-dump-not "Jumps threaded" "vrp1"} } */
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom1"} } */
=======
/* { dg-final { scan-tree-dump-not "Jumps threaded" "dom2"} } */
>>>>>>> gcc-mirror/master
