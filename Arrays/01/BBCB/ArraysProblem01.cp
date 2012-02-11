MODULE ModernArrays01;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10 OF INTEGER;
    n, i, sum: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    n := -1;
    WHILE In.Done DO
      n := n + 1;
      In.Int(a[n]);
    END;
    n := n - 1;
    
    sum := 0;
    i := 0;
    WHILE i <= n DO
      sum := sum + a[i];
      i := i + 2;
    END;
    StdLog.Int(sum);
  END Do;
  
END ModernArrays01.

(!)ModernArrays01.Do 4 6 1 4 4 3 9 1 9