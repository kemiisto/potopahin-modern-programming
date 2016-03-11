PROGRAM main
  
  USE iso_fortran_env

  IMPLICIT NONE
  
  INTEGER :: sum = 0, n = 0, iostatus = 0
  
  DO WHILE (iostatus == 0)
    READ (unit=input_unit, fmt='(i9)', iostat=iostatus), n
    IF ((iostatus == 0) .and. (n > 0)) sum = sum + n
  END DO

  PRINT *, sum

END PROGRAM main