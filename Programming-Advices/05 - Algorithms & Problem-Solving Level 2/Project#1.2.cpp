
// Project1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>

using namespace std;

enum optines { Stone = 1, Paper = 2, Scisser = 3 };

optines ComputerChoice();
optines PersonChoice();

int NumOfRound(string messege);
int ReadNum(string messege);
int RandomNumber(int From, int To);
void Game();
void PrintChoisees(optines person, optines computer);
void ConvertenumtoString(optines Choice);
void GameOver(int Round, int PlayerWon, int ComputerWon, int DrowTime);
void GameOverHeadder();

int main()
{
    int PlayAgain = 0;
    srand((unsigned)time(NULL));

    do {
        Game();
        PlayAgain= ReadNum("Do You Want to play again Yes[1] ,No[0] : ");
    } while(PlayAgain);
    
}

int RandomNumber(int From, int To)
{
    //Function to generate a random numberint 
    int randNum = rand() % (To - From + 1) + From;
    // cout << '\n' << randNum << endl;
    return randNum;
}

int NumOfRound(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;

}

int ReadNum(string messege)
{
    int num;
    do {
        cout << messege;
        cin >> num;
    } while (num < 0);
    return num;

}
optines PersonChoice()
{
    int choice;
    cout << "\nYour choise : [1] Stone , [2] Paper ,[3] Scisser ? ";
    cin >> choice;
    return (optines)choice;
}

optines ComputerChoice()
{
    int choice;
    choice = RandomNumber(1, 3);
    return (optines)choice;
}

void Game()
{
    optines person, computer;
    int Round = 0,PlayerWon=0,ComputerWon=0,DrowTime=0;
    Round = NumOfRound("\nEnter Number of Rounds : ");
    for (int i = 0; i < Round; i++)
    {
        cout << "\nRound[" << i + 1 << "] Begins : \n";
        person = PersonChoice();
        computer = ComputerChoice();
        cout << "\n----------------------Round[" << i + 1 << "]----------------------\n\n";
        PrintChoisees(person, computer);
        //system("Color C0");

        if ((person == optines::Stone) && (computer == optines::Scisser))
        {
            // pereson won
          //  system("Color C2"); //Green 
            cout << "person Won\n";
            PlayerWon++;
        }
        else if ((person == optines::Stone) && (computer == optines::Paper))
        {
            //computer won
       //     system("Color C4"); //Red
            cout << "computer Won\n";
            ComputerWon++;
        }
        else if ((person == optines::Paper) && (computer == optines::Stone))
        {
            //pereson won
         //   system("Color C2"); //Green 
            cout << "person Won\n";
            PlayerWon++;
        }

        else if ((person == optines::Paper) && (computer == optines::Scisser))
        {
            //computer won
        //    system("Color C4"); //Red
            cout << "computer Won\n";
            ComputerWon++;
        }

        else if ((person == optines::Scisser) && (computer == optines::Paper))
        {
            //person won
         //   system("Color C2"); //Green 
            cout << "person Won\n";
            PlayerWon++;
        }

        else if ((person == optines::Scisser) && (computer == optines::Stone))
        {
            //computer won
         //   system("Color C4"); //Red
            cout << "computer Won\n";
            ComputerWon++;
        }
        else
        {//
           // system("Color C6"); //yellow 
            cout << "No Winner\n ";
            DrowTime++;
        }
        
        cout << "\n---------------------------------------------------\n";
      //  system("Color C0"); //Default 
    }

    GameOver(Round, PlayerWon, ComputerWon, DrowTime);



}

void PrintChoisees(optines person, optines computer)
{
    cout << "Player Choice :";
    ConvertenumtoString(person);

    cout << "Computer Choice :";
    ConvertenumtoString(computer);

}

void ConvertenumtoString(optines Choice)
{
    //  string choise = ""; 
    switch (Choice)
    {
        //Stone=1 , Paper=2 ,Scisser=3
    case 1:
        cout << "Stone\n";
        break;
    case 2:
        cout << "Paper\n";
        break;
    case 3:
        cout << "Scisser\n";
        break;
    default:
        cout << "Error\n";
    }
}


void GameOver(int Round, int PlayerWon, int ComputerWon, int DrowTime)
{
    GameOverHeadder(); 
    cout << "Game Rounds : " << Round << endl; 
    cout << "Player won time: " << PlayerWon << endl;
    cout << "Computer won time: " << ComputerWon << endl;
    cout << "Drow Time: " << DrowTime << endl;
    cout << "Final Winner: ";
        if (PlayerWon > ComputerWon)
            cout << "Player won\n" ; 
        else if (PlayerWon < ComputerWon)
            cout << "Computer won\n";
        else
            cout << "No ONE\n";
        cout << "\n\n--------------------------------------------------------\n";

}


void GameOverHeadder()
{
    cout << "\n\n\n\n--------------------------------------------------------\n";
    cout << "\t\t +++ Game Over +++ \n";
    cout << "--------------------------------------------------------\n";

    cout << "--------------------[ Game Results ]--------------------\n";

}
/*
    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
*/
