MODULE ModernNestedLoops02;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    n, i, j: INTEGER;
    a: ARRAY 10 OF CHAR;
  BEGIN
    StdLog.Clear;
    In.Open;
    
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Char(a[n]);
    END;

    i := 0;
    WHILE i < n DO
      IF a[i] = "a" THEN
        j := i;
        WHILE j < n DO
          a[j] := a[j + 1];
          j := j + 1;
        END;
        n := n - 1;
      ELSE
        i := i + 1;
      END;
    END;

    FOR i := 0 TO n - 1 DO
      StdLog.Char(a[i]);
    END;
  END Do;
  
END ModernNestedLoops02.

(!)ModernNestedLoops02.Do abadaabc