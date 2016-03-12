with Ada.Text_IO;
with Ada.Integer_Text_IO;

procedure Loops_Problem_02 is
  
  procedure Do_Problem(A, B : Integer) is
    Product : Integer;
  begin -- Do_Problem
    Product := 1;
    for I in 1 .. B loop
      Product := Product * A;
    end loop;
    Ada.Integer_Text_IO.Put(Product);
    Ada.Text_IO.New_Line;
  end Do_Problem;
  
begin -- Loops_Problem_02
  Do_Problem( 2, 3);
  Do_Problem(-2, 2);
  Do_Problem(-2, 3);
end Loops_Problem_02;