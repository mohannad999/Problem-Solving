#include <iostream>
#include <string>


int main ()
{
std::string s="Hello, World !!";
std::cout<<s<<std::endl;
s.insert(5," C++");
std::cout<<s<<std::endl;

s.erase(9,1);
std::cout<<s<<std::endl;

s.erase(16,2);
std::cout<<s<<std::endl;

s.replace(6,3,"OOP");
std::cout<<s<<std::endl;

// s.resize(5);
// std::cout<<s<<std::endl;

// s.resize(20, '.');
// std::cout<<s<<std::endl;
int pos=0;
pos=s.find("P");
std::cout<<pos<<std::endl;

// pos=s.rfind("d");
// std::cout<<pos<<std::endl;

pos=s.find("o",6);
std::cout<<pos<<std::endl;

std::cout<<s.substr(0,6)+"Mohannad"<<std::endl;

// if(s.contains("OOP"))
// std::cout<<"true"<<std::endl;

//s.ends_with("Hello");
 

    return 0;
}