/* { dg-do run } */
/* { dg-options "-O2" } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-additional-options "-DMAX_COPY=1025" { target simulator } } */
=======
/* { dg-additional-options "-DMAX_COPY=1025" { target { { simulator } || { nvptx-*-* } } } } */
>>>>>>> gcc-mirror/master
=======
/* { dg-additional-options "-DMAX_COPY=1025" { target simulator } } */
>>>>>>> master
=======
/* { dg-additional-options "-DMAX_COPY=1025" { target { { simulator } || { nvptx-*-* } } } } */
>>>>>>> gcc-mirror/trunk
/* { dg-additional-options "-minline-stringops-dynamically" { target { i?86-*-* x86_64-*-* } } } */

#include "pr59605.c"
