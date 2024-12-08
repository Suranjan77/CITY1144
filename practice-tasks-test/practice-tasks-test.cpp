#include "pch.h"
#include "../practice-tasks/Employee.h"
#include "../practice-tasks/Manager.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace practicetaskstest
{
	TEST_CLASS(practicetaskstest)
	{
	public:

		std::string manager_name = "testmgr";
		int manager_id = 1;
		double manager_salary = 1000.0;
		std::string manager_department = "testdeprt";

		TEST_METHOD(ManagerCreatedProperly)
		{
			Employee* manager = new Manager(manager_name, manager_id, manager_salary, manager_department);

			Assert::AreEqual(manager->getName(), manager_name);
			Assert::AreEqual(manager->getId(), manager_id);
			Assert::AreEqual(manager->getSalary(), manager_salary);
			Assert::AreEqual(static_cast<Manager*>(manager)->getDepartment(), manager_department);
		}

		TEST_METHOD(BonusCalculationCorrect)
		{
			Employee* manager = new Manager(manager_name, manager_id, manager_salary, manager_department);

			Assert::AreEqual(manager->calculateBonus(), 100.0);
		}

		TEST_METHOD(BonusCalculationCorrectForComputing)
		{
			Employee* manager = new Manager(manager_name, manager_id, manager_salary, "computing");

			Assert::AreEqual(manager->calculateBonus(), 50.0);
		}
	};
}
