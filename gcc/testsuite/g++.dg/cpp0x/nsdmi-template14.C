// PR c++/58583
// { dg-do compile { target c++11 } }

template<int> struct A // { dg-error "has been parsed" }
{
  int i = (A<0>(), 0); // { dg-error "has been parsed" }
};

template<int N> struct B
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> master
  B* p = new B<N>;
};

B<1> x; // { dg-error "recursive instantiation of non-static data" }
<<<<<<< HEAD
=======
=======
>>>>>>> gcc-mirror/trunk
  B* p = new B<N>; // { dg-error "recursive instantiation of non-static data" }
};

B<1> x;
<<<<<<< HEAD
>>>>>>> gcc-mirror/master
=======
>>>>>>> master
=======
>>>>>>> gcc-mirror/trunk

struct C
{
  template<int N> struct D
  {
    D* p = new D<0>;
  };
};
