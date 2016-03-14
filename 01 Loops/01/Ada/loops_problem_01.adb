with Ada.Text_IO;
with Ada.Integer_Text_IO;

procedure Loops_Problem_01 is
  N, I, Sum : Integer;
begin
  Ada.Integer_Text_IO.Get(N);

  Sum := 0;
    for I in 1 .. N loop
      Sum := Sum + I;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
  
    Sum := 0;
    I := 1;
    while I <= N loop
      Sum := Sum + I;
      I := I + 1;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
  
    Sum := 0;
    I := 1;
    loop
      Sum := Sum + I;
      I := I + 1;
      exit when I > N;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
end Loops_Problem_01;