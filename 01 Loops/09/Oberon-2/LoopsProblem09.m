MODULE LoopsProblem09;

IMPORT In, Out;

VAR
  n, i, sum: INTEGER;

BEGIN
  In.Open;
  In.Int(n);

  sum := 0;
  FOR i := 1 TO n DO
    sum := sum + (2 * i - 1);
  END;
  
  Out.Int(sum, 0);  
END LoopsProblem09.
