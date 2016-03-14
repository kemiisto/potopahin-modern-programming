MODULE ModernLoops04;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    w, i, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(w);

    i := 0;
    sum := 0;
    WHILE sum <= w DO
      i := i + 1;
      sum := sum + i * i;
    END;
    sum := sum - i * i;
    StdLog.Int(sum);

    i := 0;
    sum := 0;
    REPEAT
      i := i + 1;
      sum := sum + i * i;
    UNTIL sum > w;
    sum := sum - i * i;
    StdLog.Int(sum);
  END Do;
  
END ModernLoops04.

(!)ModernLoops04.Do 50
(!)ModernLoops04.Do 90
(!)ModernLoops04.Do 204