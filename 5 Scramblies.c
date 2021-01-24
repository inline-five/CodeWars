/*
Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be 
rearranged to match str2, otherwise returns false.

Notes:

Only lower case letters will be used (a-z). No punctuation or digits will be included.
Performance needs to be considered
Input strings s1 and s2 are null terminated.
Examples
scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False
*/

#include <stdbool.h>
#include <string.h>

bool scramble(const char *str1, const char *str2)
{
  int letters_map[26] = {0};
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  
  if (len1 < len2)
  {
    return 0;
  }
  
  for (int i = 0; i < len1; i++)
  {
    letters_map[str1[i]-97] += 1;
    
    if (i < len2)
    {
      letters_map[str2[i]-97] -= 1;
    }
  }
  
  for (int i = 0; i < len2; i++)
  {
    if (letters_map[str2[i] - 97] < 0)
    {
      return 0;
    }
  }
  
  return 1;
}
