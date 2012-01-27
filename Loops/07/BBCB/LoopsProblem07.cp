MODULE ModernLoops07;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a1, a2, i, n, t: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    a1 := 1;
    a2 := 1;
    StdLog.Int(a1);
    StdLog.Int(a2);

    FOR i := 3 TO n DO
      t := a2;
      a2 := a1 + a2;
      a1 := t;
      StdLog.Int(a2);
    END;
  END Do;
  
END ModernLoops07.

(!)ModernLoops07.Do 10