MODULE LoopsProblem05;

IMPORT In, Out;

VAR
  b, n, q, sum, i: INTEGER;

BEGIN
  In.Open;
  In.Int(b);
  In.Int(n);
  In.Int(q);

  sum := 0;
  FOR i := 1 TO n DO
    sum := sum + b;
    b := b * q;
  END;
  Out.Int(sum, 0);
END LoopsProblem05.
