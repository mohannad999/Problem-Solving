// string::back
#include <iostream>
#include <string>

int main ()
{
  std::string str ("hello world.");
  std::cout<< str.back()<<'\n';
  str.back() = '!';
  std::cout << str << '\n';
  return 0;
}