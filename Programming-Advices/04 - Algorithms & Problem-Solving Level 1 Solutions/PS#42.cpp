// PS#42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

struct strTaskDuration
{
    int NumberOfDays;
    int NumberOfHours;
    int NumberOfMinuts;
    int NumberOfSeconds;
};

int ReadPositveNum(string messege)
{
    int num; 
    do {
        cout << messege;
        cin >> num;
    } while (num<=0);

    return num;

}


strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration; 
    TaskDuration.NumberOfDays = ReadPositveNum("Please Enter number of Days : "); 
    TaskDuration.NumberOfHours = ReadPositveNum("Please Enter number of Hours : ");
    TaskDuration.NumberOfMinuts = ReadPositveNum("Please Enter number of Min : ");
    TaskDuration.NumberOfSeconds = ReadPositveNum("Please Enter number of Sec : ");

    return TaskDuration; 

}

int CalTaskDurationInSec(strTaskDuration TaskDuration)
{
    int TaskDurationInSec = 0;
    TaskDurationInSec = TaskDuration.NumberOfDays    * 24 * 60 * 60; 
    TaskDurationInSec += TaskDuration.NumberOfHours  * 60 * 60;
    TaskDurationInSec += TaskDuration.NumberOfMinuts * 60;
    TaskDurationInSec += TaskDuration.NumberOfSeconds;

    return TaskDurationInSec; 
}

int main()
{

    cout << "\n\nThe Task duration in Seconds = " << CalTaskDurationInSec(ReadTaskDuration())<<endl;
}

