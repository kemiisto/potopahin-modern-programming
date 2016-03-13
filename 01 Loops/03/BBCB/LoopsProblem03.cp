MODULE ModernLoops03;

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
      sum := sum + i * 2;
    END;
    StdLog.Int(i);
  END Do;
  
END ModernLoops03.

(!)ModernLoops03.Do 12
(!)ModernLoops03.Do 20
(!)ModernLoops03.Do 30