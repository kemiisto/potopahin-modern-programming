with Ada.Integer_Text_IO;

procedure Loops_Problem_02 is
  A, B, Product : Integer;  
begin
  Ada.Integer_Text_IO.Get(A);
  Ada.Integer_Text_IO.Get(B);

  Product := 1;
  for I in 1 .. B loop
    Product := Product * A;
  end loop;
  
  Ada.Integer_Text_IO.Put(Product);
end Loops_Problem_02;