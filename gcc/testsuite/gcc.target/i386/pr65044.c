<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master
/* { dg-error "-fcheck-pointer-bounds is not supported with Address Sanitizer" } */
/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fsanitize=address" } */
<<<<<<< HEAD
=======
=======
>>>>>>> gcc-mirror/trunk
=======
>>>>>>> gcc-mirror/master
/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fsanitize=address" } */
/* { dg-error "-fcheck-pointer-bounds is not supported with Address Sanitizer" "" { target *-*-* } 0 } */
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
>>>>>>> gcc-mirror/trunk
=======
>>>>>>> gcc-mirror/master

extern int x[];

void
foo ()
{
  x[0] = 0;
}
