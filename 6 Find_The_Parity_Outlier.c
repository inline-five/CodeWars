#include <stdlib.h>
 
int find_outlier(const int *values, size_t count)
{
 
    int odd = 0;
    int even = 0;
    int *ptr = values;
 
    for (int i = 0; i < 3; i++)
    {
        if (values[i] == 0 || values[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
 
 
    if (even > odd)
  {
        while (count != 0)
        {
     
            if (*ptr % 2 == 1 || *ptr % 2 == -1)
            {
              return *ptr;
            }
            ptr++;
            count--;
        }
    }
 
    else
    {
        while (count != 0)
        {
            if (*ptr % 2 == 0)
            {
              return *ptr;
            }
          ptr++;
          count--;
        }
    }
    return 0;
}

/*
https://www.codewars.com/kata/5526fc09a1bbd946250002dc

You are given an array (which will have a length of at least 3, but could be very large) containing integers. 
The array is either entirely comprised of odd integers or entirely comprised of even integers except for a 
single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

Examples
[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)
*/
