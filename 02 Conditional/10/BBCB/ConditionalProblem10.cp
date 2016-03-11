MODULE ModernConditional10;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a1, b1, c1, a2, b2, c2, x1, x2: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a1);
    In.Int(b1);
    In.Int(c1);

    In.Int(a2);
    In.Int(b2);
    In.Int(c2);

    IF a1 * b2 # a2 * b1 THEN
      StdLog.String('Единственное решение:');
      x1 := (c1 * b2 - c2 * b1) DIV (a1 * b2 - a2 * b1);
      x2 := (a1 * c2 - a2 * c1) DIV (a1 * b2 - a2 * b1);
      StdLog.Int(x1);
      StdLog.Int(x2);
    ELSIF a1 * c2 = a2 * c1 THEN
      StdLog.String('Бесконечное множество решений.');
    ELSE
      StdLog.String('Решений нет.');
    END;
  END Do;
  
END ModernConditional10.

(!)ModernConditional10.Do