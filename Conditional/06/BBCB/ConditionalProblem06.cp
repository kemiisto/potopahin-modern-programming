MODULE ModernConditional06;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b, c, d, l: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a);
    In.Int(b);
    In.Int(c);
    In.Int(d);
    In.Int(l);

    IF l < a THEN
      StdLog.Int(1);
    ELSIF l < b THEN
      StdLog.Int(2);
    ELSIF l < c THEN
      StdLog.Int(3);
    ELSIF l < d THEN
      StdLog.Int(4);
    ELSE
      StdLog.Int(5);
    END;
  END Do;
  
END ModernConditional06.

(!)ModernConditional06.Do 1 2 3 4 5
(!)ModernConditional06.Do 1 2 3 4 0
(!)ModernConditional06.Do 1 3 4 5 2