MODULE ModernArrays10;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, b: ARRAY 10 OF CHAR;
    n, i: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(n);

    i := 0;
    In.Char(a[0]);
    WHILE i < n DO
      In.Char(a[i]);
      i := i + 1;
    END;

    i := 0;
    In.Char(b[0]);
    WHILE i < n DO
      In.Char(b[i]);
      i := i + 1;
    END;
    
    i := 0;
    WHILE (a[i] = b[i]) & (i < n) DO
      i := i + 1;
    END;

    IF i = n THEN
        StdLog.String("Массивы совпадают.");
    ELSE
        StdLog.String("Массивы не совпадают.");
    END;
  END Do;
  
END ModernArrays10.

(!)ModernArrays10.Do 4 abcd abcd
(!)ModernArrays10.Do 4 abcd abdc
(!)ModernArrays10.Do 4 bacd abcd