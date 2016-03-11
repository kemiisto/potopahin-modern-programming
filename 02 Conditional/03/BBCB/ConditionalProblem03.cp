MODULE ModernConditional03;

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
      IF n >= 0 THEN
        sum := sum + n;
      END;
      In.Int(n);
    END;

    StdLog.Int(sum);
  END Do;
  
END ModernConditional03.

(!)ModernConditional03.Do 1 2 3 -2 4 2