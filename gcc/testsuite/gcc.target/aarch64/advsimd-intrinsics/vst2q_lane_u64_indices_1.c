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
f_vst2q_lane_u64 (uint64_t * p, uint64x2x2_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst2q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  vst2q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
  vst2q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  vst2q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 2 out of range 0 - 1" "" { target *-*-* } 0 } */
  vst2q_lane_u64 (p, v, 2);
  /* { dg-error "lane -1 out of range 0 - 1" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  vst2q_lane_u64 (p, v, -1);
  return;
}
