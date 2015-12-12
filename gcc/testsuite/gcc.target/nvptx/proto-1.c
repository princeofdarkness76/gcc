/* { dg-do compile } */

int f(void)
{
  const int dev = 4;

  /* Check that without an explicit prototype, we deduce from call site the
     signature for the (mandatory in PTX) prototype.  */
<<<<<<< HEAD
  /* extern int acc_on_device_(int *); */
  /* { dg-final { scan-assembler-not "\\\.callprototype" } } */
  /* { dg-final { scan-assembler "\\\.extern \\\.func \\\(\[^,\n\r\]+\\\)acc_on_device_ \\\(\[^,\n\r\]+\\\);" } } */
  return !acc_on_device_(&dev);
=======
  /* extern int foo (int *); */
  /* { dg-final { scan-assembler-not "\\\.callprototype" } } */
  /* { dg-final { scan-assembler "\\\.extern \\\.func \\\(\[^,\n\r\]+\\\) foo \\\(\[^,\n\r\]+\\\);" } } */
  return !foo(&dev);
>>>>>>> gcc-mirror/master
}
