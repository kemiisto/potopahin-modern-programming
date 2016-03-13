with Ada.Command_Line;
with Ada.Text_IO;
with Ada.Integer_Text_IO;

procedure Loops_Problem_01 is
  
  procedure Do_Problem(N : Natural) is
    I, Sum : Natural;
  begin -- Do_Sum
    Sum := 0;
    for I in 0 .. N loop
      Sum := Sum + I;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
  
    Sum := 0;
    I := 0;
    while I <= N loop
      Sum := Sum + I;
      I := I + 1;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
  
    Sum := 0;
    I := 0;
    loop
      Sum := Sum + I;
      I := I + 1;
      exit when I > N;
    end loop;
    Ada.Integer_Text_IO.Put(Sum);
    
    Ada.Text_IO.New_Line;
  end Do_Problem;
  
begin -- Loops_Problem_01
  Do_Problem(Natural'Value(Ada.Command_Line.Argument(1)));
end Loops_Problem_01;