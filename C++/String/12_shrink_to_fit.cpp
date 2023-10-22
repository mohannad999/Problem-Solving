#include <iostream>
#include <string>


int main ()
{
std::string str (100,'x');
std::cout << "1. capacity of str: " << str.capacity() << '\n';
  // std::cout <<str <<'\n';
  str.resize(10);
  std::cout << "2. capacity of str: " << str.capacity() << '\n';
  // std::cout <<str <<'\n';
  str.shrink_to_fit();
  std::cout << "3. capacity of str: " << str.capacity() << '\n';
//std::cout <<str <<'\n';
    return 0;
}