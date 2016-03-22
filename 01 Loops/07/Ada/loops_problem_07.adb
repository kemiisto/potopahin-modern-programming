with Ada.Integer_Text_IO;

procedure Loops_Problem_07 is
  A1, A2, N, T : Integer;
begin
  Ada.Integer_Text_IO.Get(N);

  A1 := 1;
  A2 := 1;
  Ada.Integer_Text_IO.Put(A1);
  Ada.Integer_Text_IO.Put(A2);

  for I in 3 .. N loop
    T := A2;
    A2 := A1 + A2;
    A1 := T;
    Ada.Integer_Text_IO.Put(A2);
  end loop;
end Loops_Problem_07;
