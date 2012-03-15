MODULE ModernArrays03;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF INTEGER;
    n, i, max1, max2: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Int(a[n]);
    END;
    n := n - 1;
    
    i := 1;
    max1 := a[0];
    max2 := a[0];
    WHILE i <= n DO
      IF a[i] > max1 THEN
        max1 := a[i];
      ELSIF a[i] > max2 THEN
        max2 := a[i];
      END;
      i := i + 1;
    END;

    StdLog.Int(max2);
    StdLog.Int(max1);
  END Do;
  
END ModernArrays03.

(!)ModernArrays03.Do 1 1 2 2 3 1