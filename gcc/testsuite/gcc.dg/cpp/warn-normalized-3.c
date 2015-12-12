// { dg-do preprocess }
<<<<<<< HEAD
<<<<<<< HEAD
// { dg-options "-std=gnu99 -fdiagnostics-show-option -Werror=normalized=" }
=======
// { dg-options "-std=gnu99 -fdiagnostics-show-option -Werror=normalized=nfc" }
>>>>>>> gcc-mirror/master
=======
// { dg-options "-std=gnu99 -fdiagnostics-show-option -Werror=normalized=" }
>>>>>>> master
/* { dg-message "some warnings being treated as errors" "" {target "*-*-*"} 0 } */
\u0F43  // { dg-error "`.U00000f43' is not in NFC .-Werror=normalized=." }
