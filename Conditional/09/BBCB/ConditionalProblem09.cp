MODULE ModernConditional09;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, c, q1, q2, q: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a);
    In.Int(b);
    In.Int(c);

    q1 := b DIV a;
    q2 := c DIV b;

    IF q1 = q2 THEN
      StdLog.String('Да.');
    ELSE
      StdLog.String('Нет.');
    END;
  END Do;
  
END ModernConditional09.

(!)ModernConditional09.Do 1 2 4