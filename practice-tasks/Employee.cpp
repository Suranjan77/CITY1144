#include "Employee.h"
#include <string>

Employee::Employee(std::string name, int id, double salary) {
	this->id = id;
	this->name = name;
	this->salary = salary;
}

double Employee::calculateBonus() {
	return 0.0;
}



	