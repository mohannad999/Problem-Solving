#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
const string ClientsFileName = "Clients.txt";
const string UsersFileName = "Users.txt";

void ShowMainMenue(string UserNamec); 
void LoginScreen();
void ShowTransactionMenu(string UserNamev);
void ShowManageUserMenu(string userName);
short GiveToUserPrimmition();

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length()); /* erase() until positon and move to next word. */
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string.
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // cast string to double
    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{

    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    return stClientRecord;
}

bool ClientExistsByAccountNumber(string AccountNumber, string FileName)
{

    vector<sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            if (Client.AccountNumber == AccountNumber)
            {
                MyFile.close();
                return true;
            }
            vClients.push_back(Client);
        }

        MyFile.close();
    }
    return false;
}

sClient ReadNewClient()
{
    sClient Client;
    cout << "Enter Account Number? ";

    // Usage of std::ws will extract allthe whitespace character
    getline(cin >> ws, Client.AccountNumber);

    while (ClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName))
    {
        cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
        getline(cin >> ws, Client.AccountNumber);
    }

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

vector<sClient> LoadCleintsDataFromFile(string FileName)
{
    vector<sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }
    return vClients;
}

void PrintClientRecordLine(sClient Client)
{
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintClientBalanceScreen(sClient Client)
{
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void ShowAllClientsScreen()

{
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient &Client : vClients)
        {

            PrintClientRecordLine(Client);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

void ShowAllClientsBalanceScreen()
{
    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else

        for (sClient &Client : vClients)
        {

            PrintClientBalanceScreen(Client);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "-----------------------------------";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nName         : " << Client.Name;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";
}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient &Client)
{
    for (sClient C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

void DepositClientRecord(sClient &Client, bool WithDRAW = false)
{
    char Answer = 'y';
    int Money;

    cout << "Enter AccountBalance? ";
    cin >> Money;
    if (!WithDRAW)
        cout << "Are you sure you want to deposit to " << Client.Name << " ? y/n ?";
    else
        cout << "Are you sure you want to WithDraw to " << Client.Name << " ? y/n ?";
    cin >> Answer;
    if (toupper(Answer) == 'Y')
    {
        if (!WithDRAW)
            Client.AccountBalance += Money;
        else
            Client.AccountBalance -= Money;
        cout << "\nNew Balnce : " << Client.AccountBalance;
    }
}

sClient ChangeClientRecord(string AccountNumber)
{
    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;
    return Client;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{

    for (sClient &C : vClients)
    {

        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }

    return false;
}

vector<sClient> SaveCleintsDataToFile(string FileName, vector<sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out); // overwrite

    string DataLine;

    if (MyFile.is_open())
    {
        for (sClient C : vClients)
        {

            if (C.MarkForDelete == false)
            {
                // we only write records that are not marked for delete.
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }

        MyFile.close();
    }

    return vClients;
}

void AddDataLineToFile(string FileName, string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {

        MyFile << stDataLine << endl;

        MyFile.close();
    }
}

void AddNewClient()
{
    sClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddNewClients()
{
    char AddMore = 'Y';
    do
    {
        // system("cls");
        cout << "Adding New Client:\n\n";

        AddNewClient();
        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}

bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveCleintsDataToFile(ClientsFileName, vClients);

            // Refresh Clients
            vClients = LoadCleintsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
    return false;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);
        cout << "\n\nAre you sure you want update this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            for (sClient &C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }

            SaveCleintsDataToFile(ClientsFileName, vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
    return false;
}

bool DepositByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);

        for (sClient &C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                DepositClientRecord(Client);
                C = Client;
                break;
            }
        }

        SaveCleintsDataToFile(ClientsFileName, vClients);

        cout << "\n\nClient Updated Successfully.";
        return true;
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
}

bool WithDrawByAccountNumber(string AccountNumber, vector<sClient> &vClients)

{

    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {

        PrintClientCard(Client);

        for (sClient &C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                DepositClientRecord(Client, true);
                C = Client;
                break;
            }
        }

        SaveCleintsDataToFile(ClientsFileName, vClients);

        cout << "\n\nDeposit Successfully.";
        return true;
    }

    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

void ShowDeleteClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tDelete Client Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(AccountNumber, vClients);
}

void ShowUpdateClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tUpdate Client Info Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);
}

void ShowAddNewClientsScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tAdd New Clients Screen";
    cout << "\n-----------------------------------\n";

    AddNewClients();
}

void ShowFindClientScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tFind Client Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    sClient Client;
    string AccountNumber = ReadClientAccountNumber();
    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number[" << AccountNumber << "] is not found!";
}

void ShowEndScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\tProgram Ends :-)";
    cout << "\n-----------------------------------\n";
}

enum enMainMenueOptions
{
    eListClients = 1,
    eAddNewClient = 2,
    eDeleteClient = 3,
    eUpdateClient = 4,
    eFindClient = 5,
    Transactions = 6,
    ManegeUsers = 7,
    Logout = 8
};

enum enTransactionOptions
{
    eDeposit = 1,
    eWithdraw = 2,
    eTotalBalance = 3,
    eMainmenu = 4
};

void GoBackToMainMenue(string user)
{
    cout << "\n\nPress any key to go back to Main Menue...";
    system("pause>0");
    ShowMainMenue(user);
}

void GoBackToTransactionMenu(string user)
{
    cout << "\n\nPress any key to go back to Transation Menue...";
    system("pause>0");
    ShowTransactionMenu(user);
}

short ReadMainMenueOption()
{
    cout << "Choose what do you want to do? [1 to 6]? ";
    short Choice = 0;
    cin >> Choice;

    return Choice;
}

void PerfromMainMenueOption(string UserName, enMainMenueOptions MainMenueOption)
{
    switch (MainMenueOption)
    {
    case enMainMenueOptions::eListClients:
    {
        system("cls");
        ShowAllClientsScreen();
        GoBackToMainMenue(UserName);
        break;
    }
    case enMainMenueOptions::eAddNewClient:
        system("cls");
        ShowAddNewClientsScreen();
        GoBackToMainMenue(UserName);
        break;

    case enMainMenueOptions::eDeleteClient:
        system("cls");
        ShowDeleteClientScreen();
        GoBackToMainMenue(UserName);
        break;

    case enMainMenueOptions::eUpdateClient:
        system("cls");
        ShowUpdateClientScreen();
        GoBackToMainMenue(UserName);
        break;

    case enMainMenueOptions::eFindClient:
        system("cls");
        ShowFindClientScreen();
        GoBackToMainMenue(UserName);
        break;

    case enMainMenueOptions::Transactions:
        system("cls");
        ShowTransactionMenu(UserName);

    case enMainMenueOptions::ManegeUsers:
        system("cls");
        ShowManageUserMenu(UserName);

    case enMainMenueOptions::Logout:
        system("cls");
        //ShowEndScreen();
        LoginScreen();
        break;
    }
}

void ShowDepositScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\t Deposit  Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    DepositByAccountNumber(AccountNumber, vClients);
}

void ShowWithDrawScreen()
{
    cout << "\n-----------------------------------\n";
    cout << "\t WithDraw  Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    WithDrawByAccountNumber(AccountNumber, vClients);
}

void PerfromTransactionOption(string UserName,enTransactionOptions TransactionOptions)
{
    switch (TransactionOptions)
    {
    case enTransactionOptions::eDeposit:
    {
        system("cls");
        ShowDepositScreen();
        GoBackToTransactionMenu(UserName);
        break;
    }
    case enTransactionOptions::eWithdraw:
        system("cls");
        ShowWithDrawScreen();
        GoBackToTransactionMenu(UserName);
        break;

    case enTransactionOptions::eTotalBalance:
        system("cls");
        ShowAllClientsBalanceScreen();
        GoBackToTransactionMenu(UserName);
        break;

    case enTransactionOptions::eMainmenu:
        system("cls");
        GoBackToMainMenue(UserName);
        break;
    }
}

void ShowMainMenue(string UserName)
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tMain Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Show Client List.\n";
    cout << "\t[2] Add New Client.\n";
    cout << "\t[3] Delete Client.\n";
    cout << "\t[4] Update Client Info.\n";
    cout << "\t[5] Find Client.\n";
    cout << "\t[6] Transactions. \n";
    cout << "\t[7] Manege Users\n";
    cout << "\t[8] Logout.\n";
    cout << "===========================================\n";
    PerfromMainMenueOption(UserName, (enMainMenueOptions)ReadMainMenueOption());
}

void ShowTransactionMenu(string UserName)
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\t Transaction Screen \n";
    cout << "===========================================\n";
    cout << "\t[1] Deposit.\n";
    cout << "\t[2] Withdradw.\n";
    cout << "\t[3] Total Balnces.\n";
    cout << "\t[4] MainMinu.\n";
    cout << "===========================================\n";
    PerfromTransactionOption(UserName,(enTransactionOptions)ReadMainMenueOption());
}

/***
 *  Manege users
 * ****/
struct stUser
{
    string userName;
    string PassWord;
    short Primmition = -1;
};

enum enManegeUser
{
    MU_ListUser = 1,
    MU_AddNewuser = 2,
    MU_DeleteUser = 3,
    MU_UpdateUser = 4,
    MU_FindUser = 5,
    MU_MainMenu = 6,
};

enum enUserPrimetion
{
    P_ListUser = 1,
    P_AddNewUser = 2,
    P_DeleteUser = 4,
    P_UpdateUser = 8,
    P_FindClient = 16,
    P_Transactions = 32,
    P_ManegeUsers = 64,
    P_Logout = 128,
};

stUser ConvertLinetoRecordUsers(string Line, string Seperator = "#//#")
{
    stUser Users;
    vector<string> vUserData;
    vUserData = SplitString(Line, Seperator);
    Users.userName = vUserData[0];
    Users.PassWord = vUserData[1];
    Users.Primmition = stoi(vUserData[2]); // cast string to Interger

    return Users;
}

vector<stUser> LoadUsersDataFromFile(string FileName)
{
    vector<stUser> vUsers;
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open())
    {
        string Line;
        stUser User;

        while (getline(MyFile, Line))
        {
            User = ConvertLinetoRecordUsers(Line);
            vUsers.push_back(User);
        }
        MyFile.close();
    }
    return vUsers;
}

string ReadUserName()
{
    string UserName = "";

    cout << "\nPlease enter UserName? ";
    cin >> UserName;
    return UserName;
}

string ReadPassword()
{
    string Password = "";

    cout << "\nPlease enter Password? ";
    cin >> Password;
    return Password;
}

void PrintUserDataScreen(stUser user)
{
    cout << "| " << setw(15) << left << user.userName;
    cout << "| " << setw(40) << left << user.PassWord;
    cout << "| " << setw(12) << left << user.Primmition;
}

stUser ReadNewUser()
{
    stUser user;
    cout << "Enter User Name? ";

    // Usage of std::ws will extract allthe whitespace character
    getline(cin >> ws, user.userName);

    // while (ClientExistsByAccountNumber( user.userName, UsersFileName))
    // {
    //     cout << "\nClient with [" << user.userName << "] already exists, Enter another User name? ";
    //     getline(cin >> ws, user.userName);
    // }

    cout << "Enter Password? ";
    getline(cin,user.PassWord);

    cout << "Enter Premition? ";
    user.Primmition=  GiveToUserPrimmition();

    return user;
}

string ConvertRecordToLineusers( stUser user, string Seperator = "#//#")
{

    string stUserRecord = "";
    stUserRecord += user.userName+ Seperator;
    stUserRecord += user.PassWord + Seperator;
    stUserRecord += to_string(user.Primmition);
    return stUserRecord;
}

void AddNewUser()
{
    stUser user;
    user = ReadNewUser();
    AddDataLineToFile(UsersFileName, ConvertRecordToLineusers(user));
}

void AddNewUsers()
{
    char AddMore = 'Y';
    do
    {
        // system("cls");
        cout << "Adding New user:\n\n";

        AddNewUser();
       
        cout << "\nUser Added Successfully, do you want to add more users? Y/N? ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}

void ShowAllUserScreen()
{
    vector<stUser> Vuser = LoadUsersDataFromFile(UsersFileName);

    cout << "\n\t\t\t\t User List (" << Vuser.size() << ") User(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    cout << "| " << left << setw(15) << "User Name";
    cout << "| " << left << setw(40) << "password";
    cout << "| " << left << setw(12) << "Primition";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;

    if (Vuser.size() == 0)
        cout << "\t\t\t\tNo Users Available In the System!";
    else

        for (stUser &user : Vuser)
        {

            PrintUserDataScreen(user);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n"
         << endl;
}

short GiveToUserPrimmition()
{
    int PrimitionValue = 0;
    char Answer = 'n';
    cout << "Do you want to give user all access ? (y/n) ?";
    cin >> Answer;

    if (Answer == 'y' || Answer == 'Y')
    {
        PrimitionValue = -1; // 0xFF //255
    }

    else
    {
        cout << "Do you want to give user ListClients access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_ListUser;
        }

        cout << "Do you want to give user Add New Client access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_AddNewUser;
        }

        cout << "Do you want to give user Delete Client access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_DeleteUser;
        }

        cout << "Do you want to give user Update Client access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_UpdateUser;
        }

        cout << "Do you want to give user Find Client access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_FindClient;
        }

        cout << "Do you want to give user Transactions  access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_Transactions;
        }

        cout << "Do you want to give user Manege Users  access? (y/n) ?";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            PrimitionValue |= (short)enUserPrimetion::P_ManegeUsers;
        }
    }

    return PrimitionValue;
}

bool ChickUserprimition(string Username, short PrimitionMask)
{
    vector<stUser> Vuser = LoadUsersDataFromFile(UsersFileName);
    for (stUser user : Vuser)
    {
        if (Username == user.userName)
        {
            if (((user.Primmition & PrimitionMask) == PrimitionMask) ||(user.Primmition ==-1))
                return true;
            else
            {
                return false;
            }
        }
    }
     return false;
}

void ShowListUserScreen(string UserName)
{
    cout << "\n-----------------------------------\n";
    cout << "\t List User Screen";
    cout << "\n-----------------------------------\n";

    if (ChickUserprimition(UserName, (short)enUserPrimetion::P_ListUser))
      ShowAllUserScreen();
    else
        cout << "User dont have Access to list User\n";
}

void ShowAddNewUserScreen(string UserName)
{
    cout << "\n-----------------------------------\n";
    cout << "\t Add New User";
    cout << "\n-----------------------------------\n";

    if (ChickUserprimition(UserName, (short)enUserPrimetion::P_AddNewUser))
    AddNewUsers();
    else
        cout << "User dont have Access to list User\n";
}

void PerfromManageUserMenu(string userName, enUserPrimetion ManegeUserOptions)
{
    switch (ManegeUserOptions)
    {
    case enUserPrimetion::P_ListUser:
    {
        system("cls");
        ShowListUserScreen(userName);
        GoBackToMainMenue(userName);
        break;
    }

       case enUserPrimetion::P_AddNewUser:
    {
        system("cls");
        ShowAddNewUserScreen(userName);
        GoBackToMainMenue(userName);
        break;
    }
    

case enManegeUser::MU_MainMenu: 
    system("cls");
    GoBackToMainMenue(userName);
    break;
}
}

void ShowManageUserMenu(string userName)
{
    system("cls");
    cout << "===========================================\n";
    cout << "\t\t Manage User Menu Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] List User.\n";
    cout << "\t[2] Add New User.\n";
    cout << "\t[3] Delete User.\n";
    cout << "\t[4] Update User .\n";
    cout << "\t[5] Find User.\n";
    cout << "\t[6] MainMenu.\n";
    cout << "===========================================\n";
    PerfromManageUserMenu(userName, (enUserPrimetion)ReadMainMenueOption());
}

bool ChichUserNameAndPassword(string UserName, string Password, vector<stUser> vUsers)
{

    for (stUser &users : vUsers)
    {
        if (users.userName == UserName)
        {
            if (users.PassWord == Password)
            {
                return true;
            }
            else
            {

                cout << "Invalid Password\n";
                //  system("pause>0");
                return false;
            }
        }
    }

    cout << "Invalid UserName/Password\n";

    return false;
}

void LoginScreen()
{

    bool Result;
    vector<stUser> vUsers = LoadUsersDataFromFile(UsersFileName);
    string UserName="";
    string Password="";
    // system("cls");
    cout << "\n-----------------------------------\n";
    cout << "\t Login  Screen";
    cout << "\n-----------------------------------\n";

    do
    {
        UserName = ReadUserName();
        Password = ReadPassword();
        Result = ChichUserNameAndPassword(UserName, Password, vUsers);
    } while (!Result);

    ShowMainMenue(UserName);
}

int main()
{

    LoginScreen();
    system("pause>0");
    return 0;
}