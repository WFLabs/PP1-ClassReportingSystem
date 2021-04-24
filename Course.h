#ifndef COURSEH
#define COURSEH

#include <string>
using namespace std;

// Class
// CRN, Rubric(COSC, Math,...), Section, Course-Name, Instructor, Days, Time, Class Seats, # Students Enrolled, Class openings.

class Course {
protected:
	string courseName, section, instruc, rubric;
//	int day, time, size, enrolled, openings;

public:
	void SetName(string clCourseName);
	void SetSect(string clSection);
	void SetInst(string clIns);
	void SetRub(string clrubric);

	string GetName();
	string GetSect();
	string GetInst();
	string GetRub();

	void PrintInfo();
};

#endif
