#pragma once

#include "Employee.h";
#include <string>;
using namespace std;

class Engineer : public Employee
{
private:
	string specialization;


public:
	Engineer(string name, int id, double salary, string specialization) : Employee(name, id, salary)
	{
		this->specialization = specialization;
	}

	double calculateBonus() override;

	string getSpecialization()
	{
		return specialization;
	}

	void setSpecialization(string x)
	{
		specialization = x;
	}
};
