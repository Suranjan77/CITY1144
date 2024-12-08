This project contains simple tasks to be completed using C++

# Instructions

1. Open the solution using Visual Studio 2022 or greater
2. Goto View > Test Explorer and press the run button >>


# Common fixes

- Clean and rebuild the Solution
- Open `practice-tasks-test` project and goto `References` and add reference to the `practice-tasks` project
- Right click on practice-tasks-test > select properties > Configuration Properties > Linker
	- Go to input, click and edit Additional Dependencies and add the class to test as "Classname.obj" (Separate by newline for multiple classes)
	- Go to General > Additional Library Directories > edit > Add new entry as "$(MSBuildStartupDirectory)\practice-tasks\x64\Debug"
- Follow this for more: https://learn.microsoft.com/en-us/visualstudio/test/how-to-use-microsoft-test-framework-for-cpp?view=vs-2022#object_files

# Question
## Task 1

https://excalidraw.com/#json=iZCydQ7a3BlkynM7QdtWU,FlJwa4rj1Yrw4TJLVb7vWg