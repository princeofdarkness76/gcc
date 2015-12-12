/* { dg-do compile } */
/* { dg-skip-if "Cannot access arbitrary stack frames" { arm*-*-* hppa*-*-* visium-*-* } } */
/* { dg-options "-Werror" } */
<<<<<<< HEAD
=======
/* { dg-additional-options "-mbackchain" { target { s390*-*-* } } } */
>>>>>>> gcc-mirror/master

/* Verify that -Wframe-address is not enabled by default by enabling
   -Werror and verifying the test still compiles.  */
#include "Wframe-address.c"
