MODULE ModernConditional08;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, c, d1, d2, t: INTEGER;
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

    IF a > b THEN
      t := a;
      a := b;
      b := t;
    END;

    d1 := b - a;
    d2 := c - b;

    IF (d1 # d2) & ((d1 = 0) OR (d2 = 0)) THEN
      StdLog.String("Нет");
    ELSE
      WHILE d2 # 0 DO
        t := d1 MOD d2;
        d1 := d2;
        d2 := t;
      END;
      StdLog.String("Да, максимальный шаг = ");
      StdLog.Int(d1);
    END;

  END Do;
  
END ModernConditional08.

(!)ModernConditional08.Do 1 2 3
(!)ModernConditional08.Do 6 2 4
(!)ModernConditional08.Do 4 6 3
(!)ModernConditional08.Do 1 1 1
(!)ModernConditional08.Do 1 2 1
(!)ModernConditional08.Do 1 1 2
(!)ModernConditional08.Do 1 2 2