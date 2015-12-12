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
{
  A : A; // { dg-error "" }
  A : B; // { dg-error "" }
  A : A(); // { dg-error "" }
  A : B(); // { dg-error "" }
  A : A[]; // { dg-error "" }
  A : B[]; // { dg-error "" }
};
