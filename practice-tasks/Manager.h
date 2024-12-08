#pragma once

#include "Employee.h";
#include <string>

class Manager: public Employee
{
private:
	std::string department;
	
public:
	Manager(std::string name, int id, double salary, std::string department) 
		: Employee(name, id, salary) { 
		this->department = department;
	}

	/**
	* 5% bonus for computing department
	* 10% bonus for others
	*/
	double calculateBonus() override;

	std::string getDepartment() {
		return department;
	}
};

