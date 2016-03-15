with Ada.Integer_Text_IO;

procedure Loops_Problem_05 is
  B, N, Q, Sum : Integer;
begin
  Ada.Integer_Text_IO.Get(B);
  Ada.Integer_Text_IO.Get(N);
  Ada.Integer_Text_IO.Get(Q);

  Sum := 0;
  for I in 1 .. N loop
    Sum := Sum + B;
    B := B * Q;
  end loop;

  Ada.Integer_Text_IO.Put(Sum);
end Loops_Problem_05;