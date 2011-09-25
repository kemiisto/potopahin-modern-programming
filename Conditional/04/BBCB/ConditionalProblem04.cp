MODULE ModernConditional04;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    sum := 0;
    WHILE In.Done DO
      In.Int(n);
      IF In.Done & (n MOD 2 = 0) THEN
        sum := sum + n;
      END;
    END;

    StdLog.Int(sum);
  END Do;
  
END ModernConditional04.

(!)ModernConditional04.Do 1 2 3 -2 4 2