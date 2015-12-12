<<<<<<< HEAD
<<<<<<< HEAD
=======
#ifdef __nvptx__
/* Force function call.  NVPTX's IO is extremely limited.  */
#undef putchar
#endif

>>>>>>> gcc-mirror/master
=======
>>>>>>> master
void dump (void *p, unsigned int len)
{
  const char digits[17] = "0123456789abcdef";
  unsigned char *a = (unsigned char *)p;
  int i;

  for (i = 0; i < len; i++)
    {
      putchar (' ');
      putchar (digits[a[i] / 16]);
      putchar (digits[a[i] % 16]);
    }
}

void put (const char s[])
{
<<<<<<< HEAD
<<<<<<< HEAD
  fputs (s, stdout);
=======
  int i;
  for (i = 0; s[i]; i++)
    putchar (s[i]);
>>>>>>> gcc-mirror/master
=======
  fputs (s, stdout);
>>>>>>> master
}

void new_line (void)
{
  putchar ('\n');
}
