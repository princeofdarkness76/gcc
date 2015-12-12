// Test that we complain about fold-expressions in C++11 and C++14.
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
// { dg-do compile { target c++11 } }
=======
// { dg-do compile { target { c++11 && { ! c++1z } } } }
>>>>>>> gcc-mirror/master
=======
// { dg-do compile { target c++11 } }
>>>>>>> master
=======
// { dg-do compile { target { c++11 && { ! c++1z } } } }
>>>>>>> gcc-mirror/trunk

template <class...T>
constexpr int f(T... t)
{
  return (... + t);		// { dg-error "fold" }
}
