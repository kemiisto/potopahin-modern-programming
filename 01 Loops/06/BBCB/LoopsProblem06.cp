MODULE ModernLoops06;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, result, sign: INTEGER;
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
    result := a;
    WHILE b > 1 DO
      result := result + a;
      b := b - 1;
    END;
    result := sign * result;

    StdLog.Int(result);
  END Do;
  
END ModernLoops06.

(!)ModernLoops06.Do 2 3
(!)ModernLoops06.Do -2 3
(!)ModernLoops06.Do 2 -3
(!)ModernLoops06.Do -2 -3
