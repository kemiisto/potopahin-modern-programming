MODULE ModernNestedLoops05;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    i, j, n: INTEGER;
    a, b, c: ARRAY 5 OF CHAR;
  BEGIN
    StdLog.Clear;
    In.Open;
    
    i := 0;
    WHILE i < 5 DO
      In.Char(a[i]);
      i := i + 1;
    END;

    In.Char(b[0]);
    i := 0;
    WHILE i < 5 DO
      In.Char(b[i]);
      i := i + 1;
    END;

    n := 0;
    i := 0;
    WHILE i < 5 DO
      j := 0;
      WHILE (j < 5) & (b[j] # a[i]) DO
        j := j + 1;
      END;
      IF j = 5 THEN
        c[n] := a[i];
        n := n + 1;
      END;
      i := i + 1;
    END;

    FOR i := 0 TO n - 1 DO
      StdLog.Char(c[i]);
    END;
    
  END Do;
  
END ModernNestedLoops05.

(!)ModernNestedLoops05.Do abcde cadbe
(!)ModernNestedLoops05.Do abcde abcdf