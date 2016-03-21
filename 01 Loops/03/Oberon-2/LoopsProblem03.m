MODULE LoopsProblem03;

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
    sum := sum + i * 2;
  END;
  
  Out.Int(i, 0);
END LoopsProblem03.
