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
f_vst3_lane_f64 (float64_t * p, float64x1x3_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  vst3_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst3_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
  vst3_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst3_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 1 out of range 0 - 0" "" { target *-*-* } 0 } */
  vst3_lane_f64 (p, v, 1);
  /* { dg-error "lane -1 out of range 0 - 0" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  vst3_lane_f64 (p, v, -1);
  return;
}
