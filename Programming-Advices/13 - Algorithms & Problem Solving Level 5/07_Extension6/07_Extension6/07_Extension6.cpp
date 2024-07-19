

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(444);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(20);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();


 /*   clsDblLinkedList <int> ::Node* N;*/

 /*   N = MydblLinkedList.GetNode(1);

    cout << "\nNode Value is: " << N->value;*/

    cout <<"\n Item(2) Value is " << MydblLinkedList.GetItem(3);

    system("pause>0");

}