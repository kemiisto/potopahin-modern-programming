MODULE LoopsProblem08;

IMPORT In, Out;

VAR
  a, b, q, signq, signr: INTEGER;

BEGIN
  In.Open;
  In.Int(a);
  In.Int(b);

  IF a * b < 0 THEN
    signq := -1;
  ELSE
    signq := 1;
  END;

  IF a < 0 THEN
    signr := -1;
  ELSE
    signr := 1;
  END;

  a := ABS(a);
  b := ABS(b);
  q := 0;
  WHILE a >= b DO
    a := a - b;
    q := q + 1;
  END;
  a := signr * a;
  q := signq * q;

  Out.Int(q, 0); Out.Char(" ");
  Out.Int(a, 0);
END LoopsProblem08.
