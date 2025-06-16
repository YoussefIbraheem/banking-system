#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

class EmployeeManager
{
public:
   static void printEmployeeMenu();
   static void newClient(Employee* employee);
   static void listAllClients(Employee* employee);
   static void searchForClient(Employee* employee);
   static void editClientInfo(Employee* employee);
   static Employee* login(int id, string password);
   static bool employeeOptions(Employee* employee);
   static bool check_employee(int id);
   static void edit_employee_password();
};

