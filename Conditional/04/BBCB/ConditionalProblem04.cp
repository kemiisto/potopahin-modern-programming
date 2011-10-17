MODULE ModernConditional04;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    sum := 0;
    In.Int(n);
    WHILE In.Done DO  
      IF n MOD 2 = 0 THEN
        sum := sum + n;
      END;
      In.Int(n);
    END;

    StdLog.Int(sum);
  END Do;
  
END ModernConditional04.

(!)ModernConditional04.Do 1 2 3 -2 4 2