MODULE LoopsProblem10;

IMPORT In, Out;

VAR
  a, d, b, q, k: INTEGER;

BEGIN
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

  Out.Int(k, 0);
END LoopsProblem10.
