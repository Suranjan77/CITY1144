#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	int id;
	double salary;
public:
	Employee(string, int, double);

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

	void setName(string x)
	{
		name = x;
	}

	void setSalary(double sal)
	{
		salary = sal;
	}

};

