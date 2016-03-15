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

    sum := 0;
    FOR i := 1 TO n DO
      sum := sum + b;
      b := b * q;
    END;
    StdLog.Int(sum);
  END Do;
  
END ModernLoops05.

(!)ModernLoops05.Do  2  3  2
(!)ModernLoops05.Do -2  3  2
(!)ModernLoops05.Do  2  3 -2