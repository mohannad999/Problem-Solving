// string::crbegin/crend
#include <iostream>
#include <string>

int main ()
{
  std::string str ("lorem ipsum");
  for (std::string::const_reverse_iterator rit=str.crbegin(); rit!=str.crend(); ++rit)
    std::cout << *rit;
  std::cout << '\n';

  return 0;
}