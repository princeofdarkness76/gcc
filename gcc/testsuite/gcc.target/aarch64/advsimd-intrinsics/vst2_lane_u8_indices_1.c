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

void
f_vst2_lane_u8 (uint8_t * p, uint8x8x2_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 8 out of range 0 - 7" "" { xfail arm*-*-* } 0 } */
  vst2_lane_u8 (p, v, 8);
  /* { dg-error "lane -1 out of range 0 - 7" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 8 out of range 0 - 7" "" { target *-*-* } 0 } */
  vst2_lane_u8 (p, v, 8);
  /* { dg-error "lane -1 out of range 0 - 7" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 8 out of range 0 - 7" "" { xfail arm*-*-* } 0 } */
  vst2_lane_u8 (p, v, 8);
  /* { dg-error "lane -1 out of range 0 - 7" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
  vst2_lane_u8 (p, v, -1);
  return;
}
