MODULE ModernConditional08;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, c, d1, d2, d3, min, i: INTEGER;
    flag: BOOLEAN;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a);
    In.Int(b);
    In.Int(c);

    d1 := ABS(b - a);
    d2 := ABS(c - b);
    d3 := ABS(c - a);
    
    (* min = min(d1, d2, d3) *) 
    min := d1;
    IF d2 < d1 THEN
      min := d2;
    END;
    IF d3 < d1 THEN
      min := d3;
    END;

    i := min;
    flag := FALSE;
    WHILE ~flag & (i > 0) DO
      IF (d1 MOD i = 0) & (d2 MOD i = 0) & (d3 MOD i = 0) THEN
        flag := TRUE;
      ELSE
        i := i - 1;
      END;
    END;
    
    IF flag THEN
      StdLog.String("Да, максимальный шаг = ");
      StdLog.Int(i);
    ELSIF (d1 = 0) & (d2 = 0) & (d3 = 0) THEN
      StdLog.String("Да, тривиальный случай, шаг = 0");
    ELSE
      StdLog.String("Нет");
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