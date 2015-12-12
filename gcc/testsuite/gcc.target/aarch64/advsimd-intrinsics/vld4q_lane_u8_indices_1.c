#include <arm_neon.h>

/* { dg-do compile } */
/* { dg-skip-if "" { *-*-* } { "-fno-fat-lto-objects" } } */
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
/* { dg-skip-if "" { arm*-*-* } } */

uint8x16x4_t
f_vld4q_lane_u8 (uint8_t * p, uint8x16x4_t v)
{
  uint8x16x4_t res;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 16 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
  res = vld4q_lane_u8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { target *-*-* } 0 } */
  res = vld4q_lane_u8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
  res = vld4q_lane_u8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 16 out of range 0 - 15" "" { target *-*-* } 0 } */
  res = vld4q_lane_u8 (p, v, 16);
  /* { dg-error "lane -1 out of range 0 - 15" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
  res = vld4q_lane_u8 (p, v, -1);
  return res;
}
