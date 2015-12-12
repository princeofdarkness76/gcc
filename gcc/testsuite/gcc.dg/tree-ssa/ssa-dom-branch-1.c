/* { dg-do compile } */ 
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-options "-O2 -w -fdump-tree-dom1-details" } */
=======
/* { dg-options "-O2 -w -fdump-tree-dom2-details" } */
>>>>>>> gcc-mirror/master
=======
/* { dg-options "-O2 -w -fdump-tree-dom1-details" } */
>>>>>>> master
=======
/* { dg-options "-O2 -w -fdump-tree-dom2-details" } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-options "-O2 -w -fdump-tree-dom2-details" } */
>>>>>>> gcc-mirror/master

typedef struct rtx_def *rtx;
struct rtx_def
{
  int code;
  rtx rt_rtx;
};
rtx
try_combine (rtx i1, rtx newpat)
{
  rtx temp;
  if (i1 && (temp = ((((((newpat->rt_rtx, ((((temp)->code) == 42)))))))))
      && ((temp =
	(((((((((((newpat)->rt_rtx),
		 ((((temp)->code) == 42) && arf ())))))))))))))
    ;
  else if (i1 && foo ());
}

/* There should be three tests against i1.  Two from the hash table
   dumps, one in the code itself.  */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "if .i1_" 3 "dom1"} } */
=======
/* { dg-final { scan-tree-dump-times "if .i1_" 3 "dom2"} } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-times "if .i1_" 3 "dom1"} } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "if .i1_" 3 "dom2"} } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-final { scan-tree-dump-times "if .i1_" 3 "dom2"} } */
>>>>>>> gcc-mirror/master

/* There should be no actual jump threads realized by DOM.  The
   legitimize jump threads are handled in VRP and those discovered
   by DOM are subsumed by collapsing a conditional.  */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-not "Threaded" "dom1"} } */
=======
/* { dg-final { scan-tree-dump-not "Threaded" "dom2"} } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-not "Threaded" "dom1"} } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-not "Threaded" "dom2"} } */
>>>>>>> gcc-mirror/trunk
=======
/* { dg-final { scan-tree-dump-not "Threaded" "dom2"} } */
>>>>>>> gcc-mirror/master
