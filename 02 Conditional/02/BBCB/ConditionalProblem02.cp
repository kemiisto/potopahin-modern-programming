MODULE ModernConditional02;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, i, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    sum := 1;
    FOR i := 2 TO SHORT(ENTIER(Math.Sqrt(n))) DO
      IF n MOD i = 0 THEN
        sum := sum + i + (n DIV i);
      END;
    END;

    IF sum = n THEN
      StdLog.String("Да.");
    ELSE
      StdLog.String("Нет.");
    END;
  END Do;
  
END ModernConditional02.

(!)ModernConditional02.Do 28
(!)ModernConditional02.Do 10
(!)ModernConditional02.Do 8128