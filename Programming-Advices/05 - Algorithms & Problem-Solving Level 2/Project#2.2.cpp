// Project#2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cstdlib>
using namespace std;


enum enQLevel { Easy = 1, Mediam = 2, Hard = 3, Mix_level=4 };
enum enQType  { ADD = 1,  Substraction = 2, Multi = 3 ,devition=4,Mix=5};
enum enQResult {PASS=1,FAIL=2};

struct stGameInfo {

	short    GameRounds; 
	enQLevel QuestionLevel; 
	enQType  QuestionType; 


};

struct stQustionInfo {

	stGameInfo stGameinfo; 
	short Qnumber=0; 
	short FirstNumber=0;
	short SecondNumber=0; 
	int MathResult=0;
	short WrongAnserNum = 0;
	short RightAnserNum = 0;
	bool FinalResult=0; 
	
	//enQResult Result;
};

short    ReadHowManyRounds(); 
enQLevel ReadQuestionLevel();
enQType  ReadQuestionType();
int RandomNumber(int From, int To); 
short GenerateRandomNumForEachLevel(enQLevel QuestionLevel); 
int  QustionResult(enQType  questiontype, int Num1, int Num2); 
//stGameInfo MathGame(void);
void PrintQustion(stQustionInfo stQustioninfo);
void StartGame(stQustionInfo stQustioninfo);
stQustionInfo GeneratQusetion(stQustionInfo stQustioninfo);
int UserInput(void); 
void ShowFinalGameResults(stQustionInfo stQustioninfo);
void ShowGameOverScreen();
//void printQusetionResult();
void WrongAnwser(void);
void RightAnwser(void);
string  Tabs(short NumberOfTabs);
enQResult UserResult(stQustionInfo stQustioninfo);

int  main(void )
{
	stQustionInfo stQustioninfo; 
	srand((unsigned)time(NULL));
	StartGame(stQustioninfo);
	return 0; 
}

short ReadHowManyRounds()
{
	short GameRounds = 1;
	do
	{
		cout << "How Many Rounds 1 to 10 ? \n";
		cin >> GameRounds;

	} while (GameRounds < 1 || GameRounds >10);

	return GameRounds;
}

enQType  ReadQuestionType()
{
	short QuestionType = 1;
	do
	{
		cout << "Enter the qusetions Type Add[1],Sub[2],Mul[3],Div[4] ,Mix[5]: ";
		cin >> QuestionType;

	} while (QuestionType < 1 || QuestionType >5);

	return (enQType) QuestionType;
}

enQLevel ReadQuestionLevel()
{
	short QuestionLevel = 1;
	do
	{
		cout << "Enter the qusetions Level Easy[1],Meduiam[2],Hard[3],Mix[4] : ";
		cin >> QuestionLevel;

	} while (QuestionLevel < 1 || QuestionLevel >4);

	return (enQLevel)QuestionLevel;
}

stQustionInfo MathGame()
{
	stQustionInfo gameinfo;
	gameinfo.stGameinfo.GameRounds = ReadHowManyRounds();
	gameinfo.stGameinfo.QuestionLevel= ReadQuestionLevel();
	gameinfo.stGameinfo.QuestionType = ReadQuestionType();

	return gameinfo;

}

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int  QustionResult(enQType  questiontype, int Num1, int Num2)
{
	switch (questiontype)
	{
	case enQType::ADD:
		return (Num1 + Num2);
		break;
	case enQType::Substraction:
		return (Num1 - Num2);
		break;
	case enQType::Multi:
		return (Num1 * Num2);
		break;
	case enQType::devition:
		return (Num1 / Num2);
		break;
	//case enQType::Mix:

	default:
		return (Num1 + Num2);

	}
}

stQustionInfo GeneratQusetion(stQustionInfo stQustioninfo)
{
	for (int i = 1; i <= stQustioninfo.stGameinfo.GameRounds; i++)
	{
		stQustioninfo.FirstNumber   = GenerateRandomNumForEachLevel(stQustioninfo.stGameinfo.QuestionLevel);
		stQustioninfo.SecondNumber  = GenerateRandomNumForEachLevel(stQustioninfo.stGameinfo.QuestionLevel);
		stQustioninfo.MathResult    = QustionResult(stQustioninfo.stGameinfo.QuestionType, stQustioninfo.FirstNumber, stQustioninfo.SecondNumber);
		stQustioninfo.Qnumber++;
		//QustionResult(stQustioninfo.stGameinfo.QuestionType, stQustioninfo.FirstNumber, stQustioninfo.SecondNumber);


	}
	return stQustioninfo;

}

void PrintQustion(stQustionInfo stQustioninfo)
{
	string QustionType_[] = { "+","-","*","/" };
	cout << "Qustion[" << stQustioninfo.Qnumber << "/" << stQustioninfo.stGameinfo.GameRounds << "]\n";
	cout << stQustioninfo.FirstNumber << " " << QustionType_[stQustioninfo.stGameinfo.QuestionType -1] << " " << stQustioninfo.SecondNumber <<endl;  //Question Type Need to Fix 
	//cout << stQustioninfo.MathResult<<endl; 


}

short GenerateRandomNumForEachLevel(enQLevel QuestionLevel)
{
	switch (QuestionLevel)
	{
	case (enQLevel::Easy): 
		return RandomNumber(1, 9);
		break; 
	case (enQLevel::Mediam):
		return RandomNumber(1, 19);
		break;
	case (enQLevel::Hard):
		return RandomNumber(20, 99);
		break;
	case (enQLevel::Mix_level):
		return RandomNumber(1, 99);
		break;
	default: 
		return RandomNumber(1, 9);
	}

}

void StartGame(stQustionInfo stQustioninfo)
{
	string PlayAgain = "Y";
	//stQustionInfo stQustioninfo;
	do
	{
		//MathGame();
		GeneratQusetion(MathGame());

		PrintQustion(stQustioninfo);


 
		//UserResult(stQustioninfo);

		if (UserResult(stQustioninfo) == enQResult::PASS)
		{
			stQustioninfo.RightAnserNum++;
			RightAnwser();
		}
		else
		{
			stQustioninfo.WrongAnserNum++;
			WrongAnwser();
			cout << "\n Right Answer :" << stQustioninfo.MathResult << endl;
		}

		if (stQustioninfo.RightAnserNum > stQustioninfo.WrongAnserNum)
			stQustioninfo.FinalResult = 1; 
		else 
			stQustioninfo.FinalResult = 0 ;

		ShowGameOverScreen(); 
		ShowFinalGameResults(stQustioninfo);

		cout << "Do you want to play Again Yes(Y,y) : "; 
		cin >> PlayAgain; 

	} while (PlayAgain == "y" || PlayAgain == "Y");


}


int UserInput()
{

	int userinput = 0;
	cin >> userinput;
	return userinput;
}


enQResult UserResult(stQustionInfo stQustioninfo)
{

	if (UserInput() == stQustioninfo.MathResult)
	{
		return enQResult::PASS;
	}
	else
		return enQResult::FAIL; 
}


void RightAnwser()
{
	cout << "\n Conratualtion :) your anwser is Right "; 
}

void WrongAnwser()
{
	cout << "\n Hard luck  ):  your anwser is Wring ";
}

void ShowGameOverScreen()
{
	cout << Tabs(2) << "__________________________________________________________\n\n";
	cout << Tabs(2) << "                 +++ G a m e  O v e r +++\n";
	cout << Tabs(2) << "__________________________________________________________\n\n";
}

void ShowFinalGameResults(stQustionInfo stQustioninfo)
{
	cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
	cout << Tabs(2) << "Game Rounds        : " << stQustioninfo.stGameinfo.GameRounds<< endl;
	cout << Tabs(2) << "Right Answer  times  : " << stQustioninfo.RightAnserNum << endl;
	cout << Tabs(2) << "Wrong Answer  times : " << stQustioninfo.WrongAnserNum << endl;
	cout << Tabs(2) << " Final Resuit: :  " ;
	if (stQustioninfo.FinalResult==true)
		cout << Tabs(2) << "   PASS :)   " << endl;
	else 
		cout << Tabs(2) << "   Fail :(   " << endl;

	cout << Tabs(2) << "___________________________________________________________\n";
	

	//SetWinnerScreenColor(GameResults.GameWinner);

}

string  Tabs(short NumberOfTabs)
{
	string t = "";

	for (int i = 1; i < NumberOfTabs; i++)
	{
		t = t + "\t";
		cout << t;
	} return t;

}