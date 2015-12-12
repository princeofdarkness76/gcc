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

void
f_vst3_lane_u16 (uint16_t * p, uint16x4x3_t v)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  /* { dg-error "lane 4 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
  vst3_lane_u16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  vst3_lane_u16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
  vst3_lane_u16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { xfail arm*-*-* } 0 } */
>>>>>>> master
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  vst3_lane_u16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/trunk
=======
  /* { dg-error "lane 4 out of range 0 - 3" "" { target *-*-* } 0 } */
  vst3_lane_u16 (p, v, 4);
  /* { dg-error "lane -1 out of range 0 - 3" "" { target *-*-* } 0 } */
>>>>>>> gcc-mirror/master
  vst3_lane_u16 (p, v, -1);
  return;
}
