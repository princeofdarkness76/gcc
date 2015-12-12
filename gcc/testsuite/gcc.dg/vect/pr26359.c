/* { dg-do compile } */
/* { dg-require-effective-target vect_int } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-additional-options "-fdump-tree-dce5-details" } */
=======
/* { dg-additional-options "-fdump-tree-dce6-details" } */
>>>>>>> gcc-mirror/master
=======
/* { dg-additional-options "-fdump-tree-dce5-details" } */
>>>>>>> master
=======
/* { dg-additional-options "-fdump-tree-dce6-details" } */
>>>>>>> gcc-mirror/trunk

int a[256], b[256], c[256];

void
foo () {
  int i;

  for (i=0; i<256; i++){
    a[i] = b[i] + c[i];
  }
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-final { scan-tree-dump-times "Deleting : vect_" 0 "dce5" } } */
=======
/* { dg-final { scan-tree-dump-times "Deleting : vect_" 0 "dce6" } } */
>>>>>>> gcc-mirror/master
=======
/* { dg-final { scan-tree-dump-times "Deleting : vect_" 0 "dce5" } } */
>>>>>>> master
=======
/* { dg-final { scan-tree-dump-times "Deleting : vect_" 0 "dce6" } } */
>>>>>>> gcc-mirror/trunk
