#include <iostream>
#include <vector>
#include "FilesManager.h"
#include "EmployeeManager.h"
#include "ClientManager.h"
#include "AdminManager.h"
#include "Screens.h"
using namespace std;
int main()
{
	/*Admin adm1 , adm2;
	adm1.set_name("sleem");
	adm1.set_password("8888888888");
	adm1.set_salary(99999);
	FilesManager::addAdmin(adm1);*/
	//Employee e1( "Ahmed", "54776897788", 90000);
	//FilesManager::addEmployee(e1);
	//FilesManager::removeAllClients();
	//Client c1("kareem", "88888888", 9000);
	//Client c2("sayed", "66666688", 8000);
	//FilesManager::addClient(c1);
	//FilesManager::addClient(c2);
	//FilesManager::removeAllAdmins();
	//FilesManager::removeAllEmployees();
	
	//adm1.edit_employee(4, "mahmoud", "01546524646454", 85000);
	//adm1.listEmployees();
	//e1.edit_client(5, "Mohamed", "446457354776897788", 80005);
	//e1.search_client(5)->display_client();
	//allClients = FilesManager::getAllClients();
	//auto allEmployees = 
	//FilesManager::getAllEmployees();
	//Employee* emp = &allEmployees[0];
	
	
	//allClients = FilesManager::getAllClients();
	//FilesManager::getAllEmployees();
	//Employee* emp = &allEmployees[0];
	//cout << allEmployees.size();
	//EmployeeManager::employeeOptions(emp);
	
	
	//FilesManager::getAllAdmins();
	//FilesManager::getAllEmployees();
	//FilesManager::getAllClients();
	//cout << "hello";
	//cout << allClients.size() << endl;
	//cout << allEmployees.size() << endl;
	//cout << allAdmins.size() << endl;
	//Client* cli = &allClients[1];
	//ClientManager::clientOptions(cli);
	//FilesManager::getAllEmployees();
	//auto selectedEmployee = EmployeeManager::login(1 ,"0000000000");
	//EmployeeManager::employeeOptions(selectedEmployee);
	//auto selectedClient = ClientManager::login(2, "22222222222");
	//selectedClient->display_client();
	//ClientManager::clientOptions(selectedClient);
	//auto selectedAdmin = AdminManager::login(1, "8888888888");
	//AdminManager::adminOptions(selectedAdmin);
	Screens::runApp();
	//string alpha;
	//cout << "enter anything\n";
	//getline(cin, alpha);
	//cout << alpha;

}


