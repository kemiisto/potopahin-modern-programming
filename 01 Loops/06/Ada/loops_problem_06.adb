with Ada.Integer_Text_IO;

procedure Loops_Problem_06 is
  A, B, Result, Sign : Integer;
begin
  Ada.Integer_Text_IO.Get(A);
  Ada.Integer_Text_IO.Get(B);

  if A * B < 0 then
    Sign := -1;
  else
    Sign := 1;
  end if;

  A := abs A;
  B := abs B;
  Result := A;
  while B > 1 loop
    Result := Result + A;
    B := B - 1;
  end loop;
  Result := Sign * Result;

  Ada.Integer_Text_IO.Put(Result);
end Loops_Problem_06;
