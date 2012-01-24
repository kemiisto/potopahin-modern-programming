MODULE ModernLoops01;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    n, i, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    sum := 0;
    FOR i := 1 TO n DO
      sum := sum + i;
    END;
    StdLog.Int(sum);

    sum := 0;
    i := 0;
    WHILE i < n DO
      i := i + 1;
      sum := sum + i;
    END;
    StdLog.Int(sum);

    sum := 0;
    i := 0;
    REPEAT
      i := i + 1;
      sum := sum + i;
    UNTIL i >= n;
    StdLog.Int(sum);
  END Do;
  
END ModernLoops01.

(!)ModernLoops01.Do 5