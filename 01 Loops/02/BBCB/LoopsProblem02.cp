MODULE ModernLoops02;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, r: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(a);
    In.Int(b);

    r := 1;
    WHILE b > 0 DO
      r := r * a;
      b := b - 1;
    END;
    StdLog.Int(r);
  END Do;
  
END ModernLoops02.

(!)ModernLoops02.Do  2 3
(!)ModernLoops02.Do -2 2
(!)ModernLoops02.Do -2 3