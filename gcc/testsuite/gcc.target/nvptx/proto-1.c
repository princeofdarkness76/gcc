/* { dg-do compile } */

int f(void)
{
  const int dev = 4;

  /* Check that without an explicit prototype, we deduce from call site the
     signature for the (mandatory in PTX) prototype.  */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master
  /* extern int acc_on_device_(int *); */
  /* { dg-final { scan-assembler-not "\\\.callprototype" } } */
  /* { dg-final { scan-assembler "\\\.extern \\\.func \\\(\[^,\n\r\]+\\\)acc_on_device_ \\\(\[^,\n\r\]+\\\);" } } */
  return !acc_on_device_(&dev);
<<<<<<< HEAD
=======
=======
>>>>>>> gcc-mirror/trunk
=======
>>>>>>> gcc-mirror/master
  /* extern int foo (int *); */
  /* { dg-final { scan-assembler-not "\\\.callprototype" } } */
  /* { dg-final { scan-assembler "\\\.extern \\\.func \\\(\[^,\n\r\]+\\\) foo \\\(\[^,\n\r\]+\\\);" } } */
  return !foo(&dev);
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
>>>>>>> gcc-mirror/trunk
=======
>>>>>>> gcc-mirror/master
}
