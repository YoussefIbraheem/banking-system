#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Validation.h"
using namespace std;

class Person
{
public:
	  int id;
	  string name, password;
	Person() {}
	Person(string name, string password)
	{
		set_name(name);
		set_password(password);
	}
	void set_id(int id) {
		this->id = id;
	}

	void set_name(string name)
	{
		this->name = name;
	}
	void set_password(string password)
	{
		this->password = password;
	}
	// getters
	int get_id() {
		return id;
	}
	string get_name()
	{
		return name;
	}
	string get_password()
	{
		return password;
	}

	void display_info() // can be used in offsprings using display_info()
	{
		cout << "ID : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Password : " << password << endl;
	}
};

