MODULE ModernLoops01;

  IMPORT StdLog, In;
  
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
    i := 1;
    WHILE i <= n DO
      sum := sum + i;
      i := i + 1;
    END;
    StdLog.Int(sum);

    sum := 0;
    i := 1;
    REPEAT
      sum := sum + i;
      i := i + 1;
    UNTIL i > n;
    StdLog.Int(sum);
  END Do;
  
END ModernLoops01.

(!)ModernLoops01.Do 1
(!)ModernLoops01.Do 10
(!)ModernLoops01.Do 100