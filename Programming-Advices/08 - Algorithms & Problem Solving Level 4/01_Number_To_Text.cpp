#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
350 – three hundred fifty
425 – four hundred twenty-five
873 - eight hundred seventy-three
112 - one hundred twelve
*/


string arr_Ones[] = {"ONE", "TWO", "THREE", "FOUR", "FIVE", "SEX", "SEVEN", "EIGHT", "NINE"};

string arr_Tens1[] = {
    "TEN",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
};

string arr_Tens2[] = {
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
};

struct WholeNumber
{
    string Ones = "";
    string Tens = "";
    string Hundreds = "";
    string Thousands = "";
    string TenThousands = "";
    string HundredThousands = "";
    string Millions = "";
    string TenMillions = "";
    string HundredMillions = "";
    string billions = "";
};

enum enNumber
{
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SEX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    eleven = 11,
    twelve = 12,
    thirteen = 13,
    fourteen = 14,
    fifteen = 15,
    sixteen = 16,
    seventeen = 17,
    eighteen = 18,
    nineteen = 19,
    twenty = 20,
    thirty = 30,
    forty = 40,
    fifty = 50,
    sixty = 60,
    seventy = 70,
    eighty = 80,
    ninety = 90,
};

enum enNumberLevel
{
    Ones = 1, // 1-9 
    Tens = 2, //10-99
    Hundreds = 3,//100-999
    Thousands = 4,//1000- 9999
    TenThousands = 5,
    HundredThousands = 6,
    Millions = 7,
    TenMillions = 8,
    HundredMillions = 9,
    billions = 10,
};

int ReadNumber(string messege)
{
    int num;

    do
    {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;
}

 vector<int> SplitNumbers(int Number)
{
    short first_Num;
    vector<int> SplitNumber;
    while (Number > 0)
    {
        first_Num = Number % 10;
        SplitNumber.push_back(first_Num);
        Number /= 10;
    }
    return SplitNumber;
}

string ConvertOnesNumber(vector<int> &Numbers)
{
   short num =Numbers[0];
   Numbers.pop_back();
  return arr_Ones[num-1];
}

string ConvertTensNumber(vector<int> &Numbers)
{
    short num ; 
   num = Numbers[1]*10 +Numbers[0] ; 

  if(num < 20 )
  {
   short num =Numbers[0]; 
   Numbers.pop_back();
   Numbers.pop_back();
  return arr_Tens1[num];
  }
 
 else 
 {
    return ( arr_Tens2[Numbers[1]-2] +"-" +arr_Ones[Numbers[0]-1]+"\n\n"); 
 }
}

string ConvertHundersNumber(vector<int> &Numbers)
{
   short num =Numbers[0];
   Numbers.pop_back();
  return arr_Ones[num-1];
}

vector<string> ConvertNumberToText(vector<int> Numbers)
{
    short SizeofVector; 
SizeofVector=Numbers.size();
vector<string>WholeNumber; 
switch((enNumberLevel)SizeofVector)
{

case Ones: 
WholeNumber.push_back(ConvertOnesNumber(Numbers)); 
break ;

case Tens :
WholeNumber.push_back(ConvertTensNumber(Numbers)); 
break ;

default :
cout << "Error " <<SizeofVector <<"\n\n"; 
break; 
}

}
int main()
{

    vector<int> Numbers; 
    int Num; 
    Num= ReadNumber("Enter Number :"); 
   ConvertNumberToText(SplitNumbers(Num)) ; 
    
    return 0;
}