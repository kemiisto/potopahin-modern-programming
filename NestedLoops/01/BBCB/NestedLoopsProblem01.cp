MODULE ModernNestedLoops01;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, i, j, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    FOR i := 2 TO n DO
      sum := 1;
      FOR j := 2 TO SHORT(ENTIER(Math.Sqrt(i))) DO
        IF i MOD j = 0 THEN
          sum := sum + j + (i DIV j);
        END;
      END;
      IF sum = i THEN
        StdLog.Int(i);
      END;
    END;
  END Do;
  
END ModernNestedLoops01.

(!)ModernNestedLoops01.Do 10000