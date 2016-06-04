MODULE ConditionalProblem01;

IMPORT In, Out, Math;

VAR
  n, i: INTEGER;

BEGIN
  In.Open;
  In.Int(n);

  FOR i := 2 TO SHORT(ENTIER(Math.Sqrt(n))) DO
    IF n MOD i = 0 THEN
      Out.Int(i, 0); Out.Char(" ");
      IF (n DIV i) # i THEN
        Out.Int(n DIV i, 0); Out.Char(" ");
      END;
    END;
  END;
END ConditionalProblem01.
