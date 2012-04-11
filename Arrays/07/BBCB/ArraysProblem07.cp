MODULE ModernArrays07;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF INTEGER;
    n, i: INTEGER;
    temp: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Int(a[n]);
    END;

    temp := a[n - 1];
    i := n - 1;
    WHILE i > 0 DO
      a[i] := a[i - 1];
      i := i - 1;
    END;
    a[0] := temp;

    i := 0;
    WHILE i < n DO
      StdLog.Int(a[i]);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays07.

(!)ModernArrays07.Do 1 2 3 4 5