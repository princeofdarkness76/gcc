/* Public domain.  */
extern int __mulhi3 (int, int);

int
__mulhi3 (int x, int y)
{
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master
  volatile int rv = 0;

  while (y > 0)
    {
      rv += x;
      y --;
    }
  return rv;
<<<<<<< HEAD
=======
  char bit;
  int neg = 0;
  int rv = 0;

  if (y < 0)
    {
      y = - y;
      neg = 1;
    }

  for (bit = 0; y && bit < sizeof (y) * 8; bit ++)
    {
      if (y & 1)
	rv += x;
      x <<= 1;
      y >>= 1;
    }  

  return neg ? - rv : rv;
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
}
