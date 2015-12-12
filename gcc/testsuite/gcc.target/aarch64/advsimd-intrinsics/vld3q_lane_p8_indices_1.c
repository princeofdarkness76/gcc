#include <arm_neon.h>

/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-fno-fat-lto-objects" } } */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-excess-errors "" { xfail arm*-*-* } } */
=======
>>>>>>> gcc-mirror/master
=======
/* { dg-excess-errors "" { xfail arm*-*-* } } */
>>>>>>> master
=======
>>>>>>> gcc-mirror/trunk
=======
>>>>>>> gcc-mirror/master
/* { dg-skip-if "" { arm*-*-* } } */

poly8x16x3_t
f_vld3q_lane_p8 (poly8_t * p, poly8x16x3_t v)
{
  poly8x16x3_t res;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 16 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
  res = vld3q_lane_p8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { target *-*-* } 0 } */
  res = vld3q_lane_p8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
  res = vld3q_lane_p8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { target *-*-* } 0 } */
  res = vld3q_lane_p8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { target *-*-* } 0 } */
  res = vld3q_lane_p8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  res = vld3q_lane_p8 (p, v, -1);
  return res;
}
