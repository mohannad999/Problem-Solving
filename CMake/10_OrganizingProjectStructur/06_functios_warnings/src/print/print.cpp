#include <iostream>

#include <print.hpp>

void myPrint(std::vector<double> const& list)
{
int temp=0;
  for(double d: list)
  {
    std::cout << d << ' ';
  }
  std::cout << '\n';
}

