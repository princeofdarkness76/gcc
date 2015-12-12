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
f_vst2_lane_s32 (int32_t * p, int32x2x2_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst2_lane_s32 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  vst2_lane_s32 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst2_lane_s32 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
  vst2_lane_s32 (p, v, -1);
  return;
}
