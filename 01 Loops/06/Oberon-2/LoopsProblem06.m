MODULE LoopsProblem06;

IMPORT In, Out;

VAR
  a, b, result, sign: INTEGER;

BEGIN
  In.Open;
  In.Int(a);
  In.Int(b);

  IF a * b < 0 THEN
    sign := -1;
  ELSE
    sign := 1;
  END;

  a := ABS(a);
  b := ABS(b);
  result := a;
  WHILE b > 1 DO
    result := result + a;
    b := b - 1;
  END;
  result := sign * result;

  Out.Int(result, 0);
END LoopsProblem06.
