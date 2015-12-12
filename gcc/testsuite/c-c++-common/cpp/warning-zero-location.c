/*
   { dg-options "-D _GNU_SOURCE -fdiagnostics-show-caret" }
   { dg-do compile }
 */

#define _GNU_SOURCE 	/* { dg-warning "redefined" } */

<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-message "" "#define _GNU_SOURCE" {target *-*-* } 0 }
=======
/* { dg-message "" "#define _GNU_SOURCE" {target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
/* { dg-message "" "#define _GNU_SOURCE" {target *-*-* } 0 }
>>>>>>> master
