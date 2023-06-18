/*
This Problem is not finshed yet 
it's Work fine form 1 to 99999
and it's need to fix some cases when there is some Zerors in the number 
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;



string arr_Ones[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

string arr_Tens1[] = {"ten", "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

string arr_Tens2[] = {"twenty","thirty","fourty", "fifty","sixty","seventy","eighty","ninety",};

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
    Zero=0,
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

string ConvertOnesNumber(vector<int>& Numbers)
{
    short num = Numbers[0];
    if (num == 0)
        return " ";
    Numbers.pop_back();
    return arr_Ones[num - 1];
}

string ConvertTensNumber(vector<int>& Numbers)
{
    short num;
    num = Numbers[1] * 10 + Numbers[0];

    if (Numbers[1] == 0)
    {
        Numbers.pop_back();
        return  ConvertOnesNumber(Numbers);
    }

    if (num < 20)
    {
        short num = Numbers[0];
        Numbers.pop_back();
        Numbers.pop_back();
        return arr_Tens1[num];
    }

    else
    {
        short num1, num2;
        num1 =Numbers[1]  - 2; 
        num2 = Numbers[0] - 1;
        Numbers.pop_back();
        Numbers.pop_back();
        return (arr_Tens2[num1] + "-" + arr_Ones[num2] + "\n\n");
    }
}

string ConvertHundredsNumber(vector<int>& Numbers)
{
    short num = Numbers[short(Hundreds)-1];

    if (num == 0)
    {
        Numbers.pop_back();
        return  ConvertTensNumber(Numbers);
    }

    Numbers.pop_back();
    return (arr_Ones[num - 1] +" hundred ");
}


string ConvertThousandNumber(vector<int>& Numbers)
{
 /*   if ((Numbers[(short)Thousands-1]) == 0)
    {
        Numbers.pop_back();
        return  ConvertHundredsNumber(Numbers);
    }*/


    short num = Numbers[short(Thousands)-1];
    Numbers.pop_back();
    return (arr_Ones[num - 1] + " Thousands ");
}


string ConvertTenThousandsNumber(vector<int>& Numbers)
{
    short num=0;
   
   num = Numbers[short(TenThousands)-1]* 10 + Numbers[short(Thousands)-1];

 /*  if ((Numbers[(short)Thousands -1]) == 0)
    {
        Numbers.pop_back();
        return  ConvertThousandNumber(Numbers);
    }*/

    if (num < 20)
    {
        short numv ;
        numv = Numbers[short(Thousands) - 1];
        Numbers.pop_back();
        Numbers.pop_back();
        return (arr_Tens1[numv] + " Thousands ");
    }

    else
    {
        short num1=0, num2=0;
        num1 = Numbers[short(TenThousands) -1] ;
        num2 = Numbers[short(Thousands) - 1] ;
        Numbers.pop_back();
        Numbers.pop_back();
        return (arr_Tens2[num1-2] + "-" + arr_Ones[num2-1] +" Thousands ");
    }

}


vector<string> ConvertNumberToText(vector<string> & WholeNumber , vector<int> & Numbers)
{
    short SizeofVector;
    SizeofVector = Numbers.size();

    switch ((enNumberLevel)SizeofVector)
    {   
    //case Zero :f
    //    return WholeNumber; 
    case Ones:
        WholeNumber.push_back(ConvertOnesNumber(Numbers));
        //return ConvertNumberToText(WholeNumber, Numbers);
        return WholeNumber; 
        break;

    case Tens:
        WholeNumber.push_back(ConvertTensNumber(Numbers));
       // ConvertNumberToText(WholeNumber, Numbers);
        return WholeNumber;
        break;

    case Hundreds:
        WholeNumber.push_back(ConvertHundredsNumber(Numbers));
        ConvertNumberToText(WholeNumber, Numbers);
        return WholeNumber;
        break;

    case  Thousands:
        WholeNumber.push_back(ConvertThousandNumber(Numbers));
        ConvertNumberToText(WholeNumber, Numbers);
        return WholeNumber;
        break;

    case  TenThousands:
        WholeNumber.push_back(ConvertTenThousandsNumber(Numbers));
        ConvertNumberToText(WholeNumber, Numbers);
        return WholeNumber;
        break;

    default:
        cout << "Error " << SizeofVector << "\n\n";
        return (WholeNumber);
        break;
    }

}
int main()
{
    vector<string>WholeNumber;
    vector<int> Numbers;
    Numbers = SplitNumbers(ReadNumber("Enter Number :"));

    ConvertNumberToText(WholeNumber, Numbers);

 for (string & c : WholeNumber)
 {
     cout << c; 
 }

    return 0;
}