MODULE ModernLoops05;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    b, n, q, sum, i: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(b);
    In.Int(n);
    In.Int(q);

    sum := b;
    FOR i := 2 TO n DO
      b := b * q;
      sum := sum + b;
    END;
    StdLog.Int(sum);
  END Do;
  
END ModernLoops05.

(!)ModernLoops05.Do 2 3 2