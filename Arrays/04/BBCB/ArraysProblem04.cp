MODULE ModernArrays04;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    f: ARRAY 10 OF INTEGER;
    n, i, max1, max2: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);
    
    i := 2;
    f[0] := 1;
    f[1] := 1;
    WHILE i < n DO
      f[i] := f[i-1] + f[i-2];
      i := i + 1;
    END;

    i := 0;
    WHILE i < n DO
      StdLog.Int(f[i]);
      i := i + 1;
    END;
  END Do;
  
END ModernArrays04.

(!)ModernArrays04.Do 10