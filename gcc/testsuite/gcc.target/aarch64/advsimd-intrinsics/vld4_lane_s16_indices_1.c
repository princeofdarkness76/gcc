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

int16x4x4_t
f_vld4_lane_s16 (int16_t * p, int16x4x4_t v)
{
  int16x4x4_t res;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 4 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
  res = vld4_lane_s16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  res = vld4_lane_s16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
  res = vld4_lane_s16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  res = vld4_lane_s16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  res = vld4_lane_s16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  res = vld4_lane_s16 (p, v, -1);
  return res;
}
