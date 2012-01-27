MODULE ModernLoops06;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, r, sign: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(a);
    In.Int(b);

    IF a * b < 0 THEN
      sign := -1;
    ELSE
      sign := 1;
    END;

    a := ABS(a);
    b := ABS(b);
    r := a;
    WHILE b > 1 DO
      r := r + a;
      b := b - 1;
    END;
    r := sign * r;
    StdLog.Int(r);
  END Do;
  
END ModernLoops06.

(!)ModernLoops06.Do 2 3