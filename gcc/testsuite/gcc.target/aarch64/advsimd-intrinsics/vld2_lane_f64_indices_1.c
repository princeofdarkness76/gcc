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

float64x1x2_t
f_vld2_lane_f64 (float64_t * p, float64x1x2_t v)
{
  float64x1x2_t res;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  res = vld2_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  res = vld2_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  res = vld2_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  res = vld2_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  res = vld2_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  res = vld2_lane_f64 (p, v, -1);
  return res;
}
