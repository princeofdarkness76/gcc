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
/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fsanitize=address" } */
/* { dg-error "-fcheck-pointer-bounds is not supported with Address Sanitizer" "" { target *-*-* } 0 } */
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
>>>>>>> gcc-mirror/trunk

extern int x[];

void
foo ()
{
  x[0] = 0;
}
