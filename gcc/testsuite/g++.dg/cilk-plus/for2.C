/* { dg-do compile } */
<<<<<<< HEAD
<<<<<<< HEAD
/* { dg-options "-O3 -fcilkplus" } */

// Test storage classes in the initialization of a <#pragma simd> for
// loop.

int *a, *b;

void foo()
{
#pragma simd
  for (static int tt=5; tt < 10; ++tt) /* { dg-error "storage class is not allowed" } */
    a[tt] = b[tt];

#pragma simd
  for (extern int var=0; var < 1000; ++var) /* { dg-error "storage class is not allowed" } */
    a[var] = var;

#pragma simd
  for (register int regj = 0; regj < 1000; ++regj) /* { dg-error "storage class is not allowed" } */
    b[regj] = a[regj] * 2;

#pragma simd
  for (volatile int vj=0; vj<1000; ++vj) /* { dg-error "induction variable cannot be volatile" } */
    a[vj] = b[vj];
=======
=======
>>>>>>> gcc-mirror/master
/* { dg-options "-fcilkplus" } */

int *p;
extern int stuff();

template <int value>
void foobar(int a)
{
#pragma simd
  for (int i=0; i < a; ++i)
    p[i] = value;
}

template <int value>
void foobar2(int a)
{
  int j = 123;
#pragma simd linear(j : value)
  for (int i=0; i < a; ++i)
    {
      p[i] = value;
      j += stuff();
    }
}

void funky()
{
  foobar <69> (1000);
  foobar2 <123> (2000);
}

void foobar3(int a)
{
  int j = 123;
#pragma simd linear(j : a + a) /* { dg-error "step size must be an integer" } */
  for (int i=0; i < a; ++i)
    {
    p[i] = 1234;
    extern int bar();
    j += bar();
    }
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> gcc-mirror/master
}
