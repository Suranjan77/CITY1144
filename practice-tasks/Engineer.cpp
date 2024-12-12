#include "Engineer.h"
#include <iostream>

double Engineer::calculateBonus() 
{
	std::cout << "Calculating bonus for you: " << this->getName() << std::endl;

	if (this->specialization == "computing") {
		return this->getSalary() * 0.05;
	}

	return this->getSalary() * 0.1;
}