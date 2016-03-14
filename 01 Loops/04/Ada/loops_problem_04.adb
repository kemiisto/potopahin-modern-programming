with Ada.Integer_Text_IO;

procedure Loops_Problem_04 is
  W, I, Sum : Integer;
begin
  Ada.Integer_Text_IO.Get(W);

  Sum := 0;
  I := 0;
  while Sum <= W loop
    I := I + 1;
    Sum := Sum + I ** 2;
  end loop;
  Sum := Sum - I ** 2;
  Ada.Integer_Text_IO.Put(Sum);

  Sum := 0;
  I := 0;
  loop
    I := I + 1;
    Sum := Sum + I ** 2;
    exit when Sum > W;
  end loop;
  Sum := Sum - I ** 2;
  Ada.Integer_Text_IO.Put(Sum);
end Loops_Problem_04;