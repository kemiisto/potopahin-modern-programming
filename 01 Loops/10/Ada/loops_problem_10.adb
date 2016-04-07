with Ada.Integer_Text_IO;

procedure Loops_Problem_10 is
  A, D, B, Q, K : Integer;
begin
  Ada.Integer_Text_IO.Get(A);
  Ada.Integer_Text_IO.Get(D);
  Ada.Integer_Text_IO.Get(B);
  Ada.Integer_Text_IO.Get(Q);

  K := 1;
  while B <= A loop
    A := A + D;
    B := B * Q;
    K := K + 1;
  end loop;

  Ada.Integer_Text_IO.Put(K);
end Loops_Problem_10;
