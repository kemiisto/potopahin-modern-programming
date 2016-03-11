MODULE ModernArrays02;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF CHAR;
    n, i: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Char(a[n]);
    END;
    n := n - 1;
    
    i := 0;
    WHILE i <= n DO
      IF a[i] = 'a' THEN
        a[i] := '1';
      END;
      i := i + 1;
    END;

    i := 0;
    WHILE i <= n DO
      StdLog.Char(a[i]);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays02.

(!)ModernArrays02.Do abaabcad