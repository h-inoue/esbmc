/* strspn example */
#include <iostream>
#include <cstring>

int main ()
{
  int i;
  char strtext[] = "129th";
  char cset[] = "1234567890";

  i = strspn (strtext,cset);
  std::cout << "The length of initial number is " << i << std::endl;
  return 0;
}
