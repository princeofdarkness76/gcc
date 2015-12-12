! { dg-do compile } 
! { dg-additional-options "-fcoarray=single" }
<<<<<<< HEAD

! TODO: These cases must fail
=======
!
! PR fortran/63861
>>>>>>> gcc-mirror/master

module test
contains
  subroutine oacc1(a)
    implicit none
    integer :: i
    integer, codimension[*] :: a
<<<<<<< HEAD
    ! { dg-excess-errors "sorry, unimplemented: directive not yet implemented" }
=======
>>>>>>> gcc-mirror/master
    !$acc declare device_resident (a)
    !$acc data copy (a)
    !$acc end data
    !$acc data deviceptr (a)
    !$acc end data
    !$acc parallel private (a)
    !$acc end parallel
<<<<<<< HEAD
    ! { dg-excess-errors "sorry, unimplemented: directive not yet implemented" }
    !$acc host_data use_device (a)
    !$acc end host_data
    !$acc parallel loop reduction(+:a)
=======
    !$acc host_data use_device (a)
    !$acc end host_data
    !$acc parallel loop reduction(+:a) ! { dg-error "Array 'a' is not permitted in reduction" }
>>>>>>> gcc-mirror/master
    do i = 1,5
    enddo
    !$acc end parallel loop
    !$acc parallel loop
    do i = 1,5
      !$acc cache (a)
    enddo
    !$acc end parallel loop
    !$acc update device (a)
    !$acc update host (a)
    !$acc update self (a)
  end subroutine oacc1
end module test
