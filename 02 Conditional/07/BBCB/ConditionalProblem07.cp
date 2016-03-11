MODULE ModernConditional07;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    n: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    WHILE (n MOD 2 = 0) & (n >= 2) DO
      n := n DIV 2;
    END;

    IF n = 1 THEN
      StdLog.String("Да");
    ELSE
      StdLog.String("Нет");
    END;
  END Do;
  
END ModernConditional07.

(!)ModernConditional07.Do 1
(!)ModernConditional07.Do 2
(!)ModernConditional07.Do 8
(!)ModernConditional07.Do 20