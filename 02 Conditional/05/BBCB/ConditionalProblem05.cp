MODULE ModernConditional05;

  IMPORT StdLog, In, Math;
  
  PROCEDURE Do*;
  VAR
    a, b, c: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;

    In.Int(a);
    In.Int(b);
    In.Int(c);

    IF a*a + b*b = c*c THEN
      StdLog.String("Да.");
    ELSIF a*a + c*c = b*b THEN
      StdLog.String("Да.");
    ELSIF b*b + c*c = a*a THEN
      StdLog.String("Да.");
    ELSE
      StdLog.String("Нет.");
    END;
  END Do;
  
END ModernConditional05.

(!)ModernConditional05.Do 1 2 3
(!)ModernConditional05.Do 3 4 5
(!)ModernConditional05.Do 5 3 4