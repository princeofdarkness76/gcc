// { dg-do compile { target c++11 } }

template<typename> struct foo // { dg-message "note" }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
{ // { dg-error "incomplete type" }
    static_assert(noexcept(((foo *)1)->~foo()), "");
=======
{
    static_assert(noexcept(((foo *)1)->~foo()), ""); // { dg-error "incomplete type" }
>>>>>>> gcc-mirror/master
=======
{ // { dg-error "incomplete type" }
    static_assert(noexcept(((foo *)1)->~foo()), "");
>>>>>>> master
=======
{
    static_assert(noexcept(((foo *)1)->~foo()), ""); // { dg-error "incomplete type" }
>>>>>>> gcc-mirror/trunk
}; 

template class foo<int>;

