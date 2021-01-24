#include <stdlib.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {

    int count = 0;
    int *arr_final = malloc(sizeof(int) * n1); 

    for (int i = 0; i < n1; i++)
    {
      int flag = 1;
      for (int j = 0; j  < n2; j++)
      {
        if (arr1[i] == arr2[j])
        {
          flag = 0;
          break;
        }
      }
      if (flag)
      {
        arr_final[count] = arr1[i];
        count += 1;
      }
    }
  
    *z = count;
    return arr_final;
}
/*
https://www.codewars.com/kata/523f5d21c841566fde000009

Your goal in this kata is to implement a difference function, which subtracts one list 
from another and returns the result.

It should remove all values from list a, which are present in list b.

array_diff([1,2],[1]) == [2]
If a value is present in b, all of its occurrences must be removed from the other:

array_diff([1,2,2,2,3],[2]) == [1,3]
*/
