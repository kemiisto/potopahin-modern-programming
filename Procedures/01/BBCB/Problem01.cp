MODULE ModernProcedures01;

  IMPORT StdLog, In;
  
  PROCEDURE Do*;
  VAR
    a: ARRAY 10, 10 OF INTEGER;
    i, j, m, n, l: INTEGER;
    
    (* 
      Проверяет, является ли квадратная подматрица матрицы a размером l единичной.
      (r, c) - положение левого верхного элемента подматрицы в матрице a.  	
    *)
    PROCEDURE CheckSquare(r, c: INTEGER): BOOLEAN;
    VAR
      i, j: INTEGER;
      (* flag равен TRUE пока не найден первый элемент, отличный от 1 *)
      flag: BOOLEAN;
    BEGIN
      flag := TRUE;
      
      i := r;
      WHILE flag & (i < r + l) DO
        j := c;
        WHILE flag & (j < c + l) DO
          IF a[i, j] # 1 THEN
            flag := FALSE;
          END;
          j := j + 1;
        END;
        i := i + 1;
      END;
      
      RETURN flag;
    END CheckSquare;
    
  BEGIN
    StdLog.Clear;
    In.Open;
    
    In.Int(m);
    In.Int(n);
    In.Int(l);
    
    FOR i := 0 TO m - 1 DO
      FOR j := 0 TO n - 1 DO
        In.Int(a[i, j]);
      END;
    END;
    
    FOR i := 0 TO m - l DO
      FOR j := 0 TO n - l DO
        IF CheckSquare(i, j) THEN
          StdLog.String("(");
          StdLog.Int(i);
          StdLog.String(",");
          StdLog.Int(j);
          StdLog.String(" )");
          StdLog.Ln;
        END;
      END;
    END;
  END Do;
  
END ModernProcedures01.

(!) ModernProcedures01.Do 4 4 2 1 1 0 0 1 1 0 0 0 0 1 1 0 0 1 1