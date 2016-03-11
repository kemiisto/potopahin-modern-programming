MODULE ModernNestedLoops03;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    i, j: INTEGER;
    a, b: ARRAY 5 OF CHAR;
    found: BOOLEAN;
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

    found := TRUE;
    i := 0;
    WHILE (i < 5) & found DO
      j := 0;
      WHILE (j < 5) & (b[j] # a[i]) DO
        j := j + 1;
      END;
      IF j = 5 THEN
        found := FALSE;
      END;
      i := i + 1;
    END;

    StdLog.Bool(found);
  END Do;
  
END ModernNestedLoops03.

(!)ModernNestedLoops03.Do abcde cadbe
(!)ModernNestedLoops03.Do abcde abcdf