MODULE ModernLoops09;

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
      sum := sum + (2 * i - 1);
    END;
    
    StdLog.Int(sum);
  END Do;
  
END ModernLoops09.

(!)ModernLoops09.Do 5
