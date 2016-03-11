MODULE ModernArrays06;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF CHAR;
    n, i: INTEGER;
    temp: CHAR;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Char(a[n]);
    END;

    temp := a[0];
    StdLog.Char(temp);
    i := 1;
    WHILE i < n DO
      IF a[i] # temp THEN
        temp := a[i];
        StdLog.Ln;
      END;
      StdLog.Char(temp);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays06.

(!)ModernArrays06.Do aavavsss