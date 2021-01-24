// do not allocate memory for return value
// assign to the provided pointer *str_out

void remove_parentheses(const char *str_in, char *str_out) {
  
    int start = 0;
  
    while (*str_in != '\0')
    {
      if (*str_in == '(')
      {
        start += 1;
      }
      
      else if (*str_in == ')')
      {
        start -= 1;
      }
      
      else if (!start)
      {
        *str_out = *str_in;
        str_out++;
      }
      
      str_in++;
    }
  
    *str_out = '\0';
}

/*
Remove the parentheses
In this kata you are given a string for example:

"example(unwanted thing)example"
Your task is to remove everything inside the parentheses as well as the parentheses themselves.

The example above would return:

"exampleexample"
Notes
Other than parentheses only letters and spaces can occur in the string. Don't worry about other
brackets like "[]" and "{}" as these will never appear.

There can be multiple parentheses.

The parentheses can be nested.
*/
