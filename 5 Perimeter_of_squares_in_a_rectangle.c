typedef unsigned long long ull;
ull perimeter(int n) {

    double list[n+1];
    list[0] = 1;
    list[1] = 1;
    double sum = 0;
    
    for (int i = 2; i < n+1; i++)
    {
        list[i] = list[i-1] + list[i-2];
    }
    
    for (int i = 0; i < n+1; i++)
    {
        sum += list[i] * 4;
    }
    
     return sum;
}

/*
https://www.codewars.com/kata/559a28007caad2ac4e000083

The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see
that the sum of the perimeters of these squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80

Could you give the sum of the perimeters of all the squares in a rectangle when there are n + 1 
squares disposed in the same manner as in the drawing:

alternative text

Hint:
See Fibonacci sequence

Ref:
http://oeis.org/A000045

The function perimeter has for parameter n where n + 1 is the number of squares 
(they are numbered from 0 to n) and returns the total perimeter of all the squares.

perimeter(5)  should return 80
perimeter(7)  should return 216
*/
