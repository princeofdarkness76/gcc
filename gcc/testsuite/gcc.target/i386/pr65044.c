<<<<<<< HEAD
/* { dg-error "-fcheck-pointer-bounds is not supported with Address Sanitizer" } */
/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fsanitize=address" } */
=======
/* { dg-do compile } */
/* { dg-require-effective-target mpx } */
/* { dg-options "-fcheck-pointer-bounds -mmpx -fsanitize=address" } */
/* { dg-error "-fcheck-pointer-bounds is not supported with Address Sanitizer" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master

extern int x[];

void
foo ()
{
  x[0] = 0;
}
