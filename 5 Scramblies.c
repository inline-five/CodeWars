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
