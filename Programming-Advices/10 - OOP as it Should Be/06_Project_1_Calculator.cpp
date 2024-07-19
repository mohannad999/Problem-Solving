#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class clsCalculator
{

private:
    int _Lastnum1;
    int _Lastnum2;
    int result=0 ;
    string lastOpreaction =""; 
    int CheckIfZero(int num)
    {
        return ((num == 0) ? 1 : num);
    }

public:
    int Add(int num1 = 0, int num2 = 0)
    {
       result=  result + num1 + num2;
       lastOpreaction="Adding ";
       _Lastnum1= num1; 
        return result;
    }

    int subtract(int num1 = 0, int num2 = 0)
    {
          result= result - (num1 - num2);
            lastOpreaction="Subracting ";
            _Lastnum1= num1; 
                return result;

    }

    int Multiply(int num1 = 1, int num2 = 1)
    {
         result=  result * num1 * num2;
                
                _Lastnum1= num1; 
                  lastOpreaction="Multiplying ";
                  return result;

    }

    int Div(int num1 = 1, int num2 = 1)
    {
          result= result / CheckIfZero(num1);
            lastOpreaction="Dividing ";
             _Lastnum1= num1; 
                return result;

    }

    void clear()
    { 
           lastOpreaction="Clearing ";
        result =0;
    }

    void Printresult(void)
    {
        cout <<"Result Aftter "<< setw(13) << left<< lastOpreaction <<setw(5) << left<< _Lastnum1 <<" is : "<<  (result)<<endl;
    }
};

int main()
{

    clsCalculator Calulator;

Calulator.Add(10);
Calulator.Printresult(); 


Calulator.Add(200);
Calulator.Printresult(); 

Calulator.subtract(10);
Calulator.Printresult(); 
Calulator.Multiply(10);
Calulator.Printresult(); 
Calulator.Div(200);
Calulator.Printresult(); 
Calulator.Div(0);
Calulator.Printresult(); 
Calulator.clear();
Calulator.Printresult(); 

    return 0;
}