MODULE ModernArrays08;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF INTEGER;
    n, i, l: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(l);

    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Int(a[n]);
    END;

    i := n;
    WHILE i > l - 1 DO
      a[i] := a[i - 1];
      i := i - 1;
    END;
    a[l - 1] := 0;

    i := 0;
    WHILE i <= n DO
      StdLog.Int(a[i]);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays08.

(!)ModernArrays08.Do 4 1 2 3 4 5