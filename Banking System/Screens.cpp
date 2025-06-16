#include "Screens.h"
#include <synchapi.h>
void Screens::printASCII(string fileName){
    string getLine = "";
    ifstream txtFile;
    txtFile.open(fileName);
    if (txtFile.is_open()) {
        while(getline(txtFile , getLine)) {
            cout << getLine << endl;
        }
    }
    else {
        cout << "File Not Found Try Again" << endl;
    }
    txtFile.close();
}

void Screens::logout() {
    system("cls");
    loginScreen(loginAs());
}

void Screens::welcome(){
    Screens::printASCII(Welcome);
    Sleep(3000);
    system("cls");
}

void Screens::bankName() {
    Screens::printASCII(WE_Bank);
    Sleep(3000);
    system("cls");
}

void Screens::loginOptions() {
    cout << "Login as:\n";
    cout << "(1)Admin\n";
    cout << "(2)Employee\n";
    cout << "(3)Client\n";
}


int  Screens::loginAs() {
    Screens::loginOptions();
    int choice;
    cout << "Please Choose 1 Of The 3 Options\n";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3) {
            return choice;
        }
        else {
            cout << "Incorrect Choice Try Again\n";
            system("cls");
            loginAs();
        }
}




void Screens::invalid(int c){
    cout << "Incorrect User ID or Password Try Again !\n";
    loginScreen(c);
}

void Screens::loginScreen(int c) {
    int id, choice = c;
    string password;
    cout << "Enter A Valid id\n";
        cin >> id;
    cout << "enter Password\n";
        cin >> password;
    switch (choice) {
    case 1 :
        if (AdminManager::login(id, password) != NULL) {
            cout << id << " " << password << endl;
            while (AdminManager::adminOptions(AdminManager::login(id, password)) != false)
            logout();
        }
        else invalid(1);
        break;
    case 2:
        if (EmployeeManager::login(id, password) != NULL) {
            while (EmployeeManager::employeeOptions(EmployeeManager::login(id, password)) != false)
                logout();
        }
        else invalid(2);
        break;
    case 3:
        if (ClientManager::login(id, password) != NULL) {
            while (ClientManager::clientOptions(ClientManager::login(id, password)) != false)
                logout();
        }
        else invalid(3);
        break;
    default:
        system("cls");
        loginScreen(loginAs());
        break;
    }
   
}




void Screens::runApp() {
    FilesManager::getAllAdmins();
    FilesManager::getAllEmployees();
    FilesManager::getAllClients();
    Screens::bankName();
    Screens::welcome();
    Screens::loginScreen(loginAs());
}