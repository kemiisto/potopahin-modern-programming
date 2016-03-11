MODULE ModernLoops08;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, q, signq, signr: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(a);
    In.Int(b);

    IF a * b < 0 THEN
      signq := -1;
    ELSE
      signq := 1;
    END;

    IF a < 0 THEN
      signr := -1;
    ELSE
      signr := 1;
    END;

    a := ABS(a);
    b := ABS(b);
    q := 0;
    WHILE a >= b DO
      a := a - b;
      q := q + 1;
    END;
    a := signr * a;
    q := signq * q;
    StdLog.Int(q);
    StdLog.Int(a);
  END Do;
  
END ModernLoops08.

(!)ModernLoops08.Do 10 3
(!)ModernLoops08.Do -10 3
(!)ModernLoops08.Do 10 -3
(!)ModernLoops08.Do -10 -3