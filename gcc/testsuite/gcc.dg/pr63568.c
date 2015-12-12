/* PR middle-end/63568 */
/* { dg-do compile } */
<<<<<<< HEAD
/* { dg-options "-fdump-tree-original" } */
=======
/* { dg-options "-O -fdump-tree-cddce1" } */
>>>>>>> gcc-mirror/master

int
fn1 (int a, int b, int m)
{
<<<<<<< HEAD
  return (a & ~m) | (b & m);
=======
  int tem1 = a & ~m;
  int tem2 = b & m;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn2 (int a, int b, int m)
{
<<<<<<< HEAD
  return (a & ~m) | (m & b);
=======
  int tem1 = a & ~m;
  int tem2 = m & b;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn3 (int a, int b, int m)
{
<<<<<<< HEAD
  return (~m & a) | (m & b);
=======
  int tem1 = ~m & a;
  int tem2 = m & b;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn4 (int a, int b, int m)
{
<<<<<<< HEAD
  return (~m & a) | (b & m);
=======
  int tem1 = ~m & a;
  int tem2 = b & m;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn5 (int a, int b, int m)
{
<<<<<<< HEAD
  return (b & m) | (a & ~m);
=======
  int tem1 = b & m;
  int tem2 = a & ~m;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn6 (int a, int b, int m)
{
<<<<<<< HEAD
  return (m & b) | (a & ~m);
=======
  int tem1 = m & b;
  int tem2 = a & ~m;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn7 (int a, int b, int m)
{
<<<<<<< HEAD
  return (m & b) | (~m & a);
=======
  int tem1 = m & b;
  int tem2 = ~m & a;
  return tem1 | tem2;
>>>>>>> gcc-mirror/master
}

int
fn8 (int a, int b, int m)
{
<<<<<<< HEAD
  return (b & m) | (~m & a);
}

/* { dg-final { scan-tree-dump-not " \\| " "original" } } */
=======
  int tem1 = b & m;
  int tem2 = ~m & a;
  return tem1 | tem2;
}

/* { dg-final { scan-tree-dump-not " \\| " "cddce1" } } */
>>>>>>> gcc-mirror/master
