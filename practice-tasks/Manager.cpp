#include "Manager.h"
#include <iostream>

double Manager::calculateBonus() {

	std::cout << "Calculating bonus for you: " << this->getName() << std::endl;

	if (this->department == "computing") {
		return this->getSalary() * 0.05;
	}

	return this->getSalary() * 0.1;
}