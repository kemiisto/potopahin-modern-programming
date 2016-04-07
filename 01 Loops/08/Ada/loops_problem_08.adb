with Ada.Integer_Text_IO;

procedure Loops_Problem_08 is
  A, B, Q, Sign_Q, Sign_R : Integer;
begin
  Ada.Integer_Text_IO.Get(A);
  Ada.Integer_Text_IO.Get(B);

  if A * B < 0 then
    Sign_Q := -1;
  else
    Sign_Q := 1;
  end if;

  if A < 0 then
    Sign_R := -1;
  else
    Sign_R := 1;
  end if;

  A := abs A;
  B := abs B;
  Q := 0;
  while A >= B loop
    A := A - B;
    Q := Q + 1;
  end loop;
  A := Sign_R * A;
  Q := Sign_Q * Q;

  Ada.Integer_Text_IO.Put(Q);
  Ada.Integer_Text_IO.Put(A);
end Loops_Problem_08;
