#include "Manager.h"
#include <iostream>

int main() {
	Manager manager("Suranjan", 1, 2000.0, "computing");

	std::cout << "So, bonus is: " << manager.calculateBonus() << std::endl;
}