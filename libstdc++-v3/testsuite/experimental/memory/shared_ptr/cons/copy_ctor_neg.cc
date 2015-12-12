<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// { dg-options "-std=gnu++1y" }
=======
// { dg-options "-std=gnu++14" }
// { dg-do compile }
>>>>>>> gcc-mirror/master
=======
// { dg-options "-std=gnu++1y" }
>>>>>>> master
=======
// { dg-options "-std=gnu++14" }
// { dg-do compile }
>>>>>>> gcc-mirror/trunk

// Copyright (C) 2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 8.2.1 Class template shared_ptr [memory.smartptr.shared]

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master

#include <experimental/memory>
#include <testsuite_hooks.h>


<<<<<<< HEAD
=======
#include <experimental/memory>
#include <testsuite_hooks.h>

>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
#include <experimental/memory>
#include <testsuite_hooks.h>

>>>>>>> gcc-mirror/trunk
struct A { virtual ~A() { } };
struct B : A { };


// 8.2.1.1 shared_ptr constructors [memory.smartptr.shared.const]

// Copy construction

void
test01()
{
  bool test __attribute__((unused)) = true;

  std::experimental::shared_ptr<A[3]> a;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  a = std::experimental::shared_ptr<B[3]> (new B[3]); // { dg-excess-errors "no matching" }
=======
  a = std::experimental::shared_ptr<B[3]> (new B[3]); // { dg-error "no match " }
>>>>>>> gcc-mirror/master
=======
  a = std::experimental::shared_ptr<B[3]> (new B[3]); // { dg-excess-errors "no matching" }
>>>>>>> master
=======
  a = std::experimental::shared_ptr<B[3]> (new B[3]); // { dg-error "no match " }
>>>>>>> gcc-mirror/trunk
}

void
test02()
{
  bool test __attribute__((unused)) = true;

  std::experimental::shared_ptr<A[]> a(new A[3]);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
  std::experimental::shared_ptr<A[2]> spa(a); // { dg-excess-errors "no matching" }
=======
  std::experimental::shared_ptr<A[2]> spa(a); // { dg-error "no matching" }
>>>>>>> gcc-mirror/master
=======
  std::experimental::shared_ptr<A[2]> spa(a); // { dg-excess-errors "no matching" }
>>>>>>> master
=======
  std::experimental::shared_ptr<A[2]> spa(a); // { dg-error "no matching" }
>>>>>>> gcc-mirror/trunk
}

int
main()
{
  test01();
  test02();
  return 0;
}
