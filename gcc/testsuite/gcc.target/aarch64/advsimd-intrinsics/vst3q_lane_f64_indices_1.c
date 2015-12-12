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

void
f_vst3q_lane_f64 (float64_t * p, float64x2x3_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst3q_lane_f64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  vst3q_lane_f64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst3q_lane_f64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
  vst3q_lane_f64 (p, v, -1);
  return;
}
