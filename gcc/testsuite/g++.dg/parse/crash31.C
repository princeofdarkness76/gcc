<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
struct A // { dg-message "not complete" }
=======
struct A
>>>>>>> gcc-mirror/master
=======
struct A // { dg-message "not complete" }
>>>>>>> master
=======
struct A
>>>>>>> gcc-mirror/trunk
=======
struct A
>>>>>>> gcc-mirror/master
{
  A : A; // { dg-error "" }
  A : B; // { dg-error "" }
  A : A(); // { dg-error "" }
  A : B(); // { dg-error "" }
  A : A[]; // { dg-error "" }
  A : B[]; // { dg-error "" }
};
