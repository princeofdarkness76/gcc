<<<<<<< HEAD
<<<<<<< HEAD
struct A // { dg-message "not complete" }
=======
struct A
>>>>>>> gcc-mirror/master
=======
struct A // { dg-message "not complete" }
>>>>>>> master
{
  A : A; // { dg-error "" }
  A : B; // { dg-error "" }
  A : A(); // { dg-error "" }
  A : B(); // { dg-error "" }
  A : A[]; // { dg-error "" }
  A : B[]; // { dg-error "" }
};
