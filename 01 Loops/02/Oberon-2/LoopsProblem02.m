MODULE LoopsProblem02;

IMPORT In, Out;

VAR
  a, b, r: INTEGER;

BEGIN
  In.Open;
  In.Int(a);
  In.Int(b);

  r := 1;
  WHILE b > 0 DO
    r := r * a;
    b := b - 1;
  END;

  Out.Int(r, 0);  
END LoopsProblem02.
