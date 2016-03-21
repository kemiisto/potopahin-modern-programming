MODULE LoopsProblem01;

IMPORT In, Out;

VAR
  n, i, sum: INTEGER;

BEGIN
  In.Open;
  In.Int(n);

  sum := 0;
  FOR i := 1 TO n DO
    sum := sum + i;
  END;
  Out.Int(sum, 0);
  Out.Char(' ');

  sum := 0;
  i := 1;
  WHILE i <= n DO
    sum := sum + i;
    i := i + 1;
  END;
  Out.Int(sum, 0);
  Out.Char(' ');

  sum := 0;
  i := 1;
  REPEAT
    sum := sum + i;
    i := i + 1;
  UNTIL i > n;
  Out.Int(sum, 0);
END LoopsProblem01.
