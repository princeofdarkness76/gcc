#include <arm_neon.h>

/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-fno-fat-lto-objects" } } */
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-excess-errors "" { xfail arm*-*-* } } */
=======
>>>>>>> gcc-mirror/master
=======
/* { dg-excess-errors "" { xfail arm*-*-* } } */
>>>>>>> master
/* { dg-skip-if "" { arm*-*-* } } */

int64x1x3_t
f_vld3_lane_s64 (int64_t * p, int64x1x3_t v)
{
  int64x1x3_t res;
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  res = vld3_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  res = vld3_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  res = vld3_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
  res = vld3_lane_s64 (p, v, -1);
  return res;
}
