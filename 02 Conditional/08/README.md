**Задание**  
Дано 3 целых числа. Проверить являются ли они членами арифметической прогрессии.  

**Входные данные**  
Три целых числа.  

**Выходные данные**  
Являются ли три числа членами арифметической прогресии.  

**Пояснение**  
Программа должна отыскать максимально возможный шаг арифметической прогрессии, которую образуют введённые числа или установить факт, что числа не образуют арифметическую прогрессию. Следует учитывать тривиальные случаи: шаг прогресии = 0 (любые три одинаковых числа) и шаг прогресии = 1 (минимальный шаг арифметической прогрессии, состоящей из любых трёх разных целых чисел).  

**Тест**  
<table>
  <tr>
    <th>Входные данные</th>
    <th>Выходные данные</th>
  </tr>
  <tr>
    <td>1 2 3</td>
    <td>Да, максимальный шаг =  1</td>
  </tr>
  <tr>
    <td>6 2 4</td>
    <td>Да, максимальный шаг =  2</td>
  </tr>
  <tr>
    <td>4 6 3</td>
    <td>Да, максимальный шаг =  1</td>
  </tr>
  <tr>
    <td>1 1 1</td>
    <td>Да, максимальный шаг =  0</td>
  </tr>
  <tr>
    <td>1 2 1</td>
    <td>Нет</td>
  </tr>
  <tr>
    <td>1 1 2</td>
    <td>Нет</td>
  </tr>
  <tr>
    <td>1 2 2</td>
    <td>Нет</td>
  </tr>
</table>  