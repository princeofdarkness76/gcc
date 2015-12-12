//PR c++/27668

template<typename class T, T = T()> // { dg-error "nested-name-specifier|two or more|valid type" }
// { dg-error "cast" "" { target c++98_only } 3 }
struct A {};

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
template<int> void foo(A<int>);	// { dg-error "cast|argument" "" { target c++98_only } }
=======
template<int> void foo(A<int>);	// { dg-error "template argument 2" "" { target c++98_only } }
>>>>>>> gcc-mirror/master
=======
template<int> void foo(A<int>);	// { dg-error "cast|argument" "" { target c++98_only } }
>>>>>>> master
=======
template<int> void foo(A<int>);	// { dg-error "template argument 2" "" { target c++98_only } }
>>>>>>> gcc-mirror/trunk
