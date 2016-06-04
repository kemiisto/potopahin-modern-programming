with Ada.Integer_Text_IO;
with Ada.Numerics.Elementary_Functions;

procedure Conditional_Problem_01 is
  N : Integer;
begin
  Ada.Integer_Text_IO.Get(N);

  for I in 2 .. Integer(Ada.Numerics.Elementary_Functions.Sqrt(Float(N))) loop
    if n mod i = 0 then
      Ada.Integer_Text_IO.Put(i);
      if (n / i) /= i then
        Ada.Integer_Text_IO.Put(n / i);
      end if;
    end if;
  end loop;
end Conditional_Problem_01;
