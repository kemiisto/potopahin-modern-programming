MODULE LoopsProblem04;

IMPORT In, Out;

VAR
  w, i, sum: INTEGER;

BEGIN
  In.Open;
  In.Int(w);

  i := 0;
  sum := 0;
  WHILE sum <= w DO
    i := i + 1;
    sum := sum + i * i;
  END;
  sum := sum - i * i;
  Out.Int(sum, 0);
  Out.Char(' ');

  i := 0;
  sum := 0;
  REPEAT
    i := i + 1;
    sum := sum + i * i;
  UNTIL sum > w;
  sum := sum - i * i;
  Out.Int(sum, 0);
END LoopsProblem04.
