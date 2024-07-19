

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




    MydblLinkedList.UpdateItem(3, 40);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    system("pause>0");

}