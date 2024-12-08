#pragma once
#include <string>
class Employee
{
private:
	std::string name;
	int id;
	double salary;
public:
	Employee(std::string, int, double);

	virtual double calculateBonus();

	std::string getName() {
		return name;
	}

	int getId() {
		return id;
	}

	double getSalary() {
		return salary;
	}
};

