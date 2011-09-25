MODULE ModernConditional03;

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
      IF In.Done & (n >= 0) THEN
        sum := sum + n;
      END;
    END;

    StdLog.Int(sum);
  END Do;
  
END ModernConditional03.

(!)ModernConditional03.Do 1 2 3 -2 4 2