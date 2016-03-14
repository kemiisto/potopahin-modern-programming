with Ada.Text_IO;
with Ada.Integer_Text_IO;

procedure Loops_Problem_03 is
  W, I, Sum : Integer;
begin
  Ada.Integer_Text_IO.Get(W);

  I := 0;
  Sum := 0;
  while Sum <= W loop
    I := I + 1;
    Sum := Sum + I * 2;
  end loop;

  Ada.Integer_Text_IO.Put(I);
end Loops_Problem_03;