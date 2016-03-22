MODULE LoopsProblem07;

IMPORT In, Out;

VAR
  a1, a2, i, n, t: INTEGER;

BEGIN
  In.Open;
  In.Int(n);

  a1 := 1;
  a2 := 1;
  Out.Int(a1, 0); Out.Char(' ');
  Out.Int(a2, 0); Out.Char(' ');

  FOR i := 3 TO n DO
    t := a2;
    a2 := a1 + a2;
    a1 := t;
    Out.Int(a2, 0); Out.Char(' ');
  END;
END LoopsProblem07.
