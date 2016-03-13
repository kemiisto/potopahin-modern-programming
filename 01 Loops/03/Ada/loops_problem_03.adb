with Ada.Text_IO;
with Ada.Integer_Text_IO;

procedure Loops_Problem_03 is
  
  procedure Do_Problem(W : Integer) is
    I, Sum : Integer;
  begin -- Do_Problem
    I := 0;
    Sum := 0;
    while Sum <= W loop
      I := I + 1;
      Sum := Sum + I * 2;
    end loop;
    Ada.Integer_Text_IO.Put(I);
    Ada.Text_IO.New_Line;
  end Do_Problem;
  
begin -- Loops_Problem_03
  Do_Problem(12);
  Do_Problem(20);
  Do_Problem(30);
end Loops_Problem_03;