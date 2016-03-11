MODULE ModernArrays05;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF INTEGER;
    n, i, temp: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Int(a[n]);
    END;
    
    i := 0;
    WHILE i < n / 2 DO
      temp := a[i];
      a[i] := a[n-1-i];
      a[n-1-i] := temp;
      i := i + 1;
    END;

    i := 0;
    WHILE i < n DO
      StdLog.Int(a[i]);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays05.

(!)ModernArrays05.Do 1 2 3 4 5