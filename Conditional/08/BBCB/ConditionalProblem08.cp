MODULE ModernConditional08;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, c, t: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a);
    In.Int(b);
    In.Int(c);

    IF a > b THEN
      t := a;
      a := b;
      b := t;
    END;

    IF b > c THEN
      t := b;
      b := c;
      c := t;
    END;

    IF c - b = b - a THEN
      StdLog.String("Да.");
    ELSE
      StdLog.String("Нет.");
    END;
  END Do;
  
END ModernConditional08.

(!)ModernConditional08.Do 1 2 3
(!)ModernConditional08.Do 6 2 4
(!)ModernConditional08.Do 4 6 3