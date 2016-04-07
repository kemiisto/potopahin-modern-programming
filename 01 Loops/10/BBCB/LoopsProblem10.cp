MODULE ModernLoops10;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a, d, b, q, k: INTEGER;
  BEGIN
    StdLog.Clear;
    In.Open;
    In.Int(a);
    In.Int(d);
    In.Int(b);
    In.Int(q);

    k := 1;
    WHILE b <= a DO
      a := a + d;
      b := b * q;
      k := k + 1;
    END;
    
    StdLog.Int(k);
  END Do;
  
END ModernLoops10.

(!)ModernLoops10.Do 2 2 1 2
