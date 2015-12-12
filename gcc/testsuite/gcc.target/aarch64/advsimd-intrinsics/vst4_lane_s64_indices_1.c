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

void
f_vst4_lane_s64 (int64_t * p, int64x1x4_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  vst4_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst4_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  vst4_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst4_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst4_lane_s64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  vst4_lane_s64 (p, v, -1);
  return;
}
