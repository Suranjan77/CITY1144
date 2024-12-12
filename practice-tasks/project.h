#pragma once
#include <string>

using namespace std;

class Project
{
protected:
	string projectName;
	string description;

public:
	Project(string projectName, string description);
	virtual string getDeadline() = 0;
	string getProjectname()
	{
		return projectName;
	}

	string getDescription()
	{
		return description;
	}



	

};
