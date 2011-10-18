MODULE ModernConditional09;

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

    IF ABS(a) > ABS(b) THEN
      d1 := a DIV b;
    ELSE
      d1 := b DIV a;
    END;

    IF ABS(b) > ABS(c) THEN
      d2 := b DIV c;
    ELSE
      d2 := c DIV b;
    END;
(*
    IF a > b THEN
      t := a;
      a := b;
      b := t;
    END;
*)
    StdLog.Int(d1);
    StdLog.Int(d2);
    StdLog.Ln;

    IF (d1 # d2) & ((d1 = 1) OR (d2 = 1)) THEN
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
  
END ModernConditional09.

(!)ModernConditional09.Do 1 2 4