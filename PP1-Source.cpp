//  Class Reporting System
//  Dwight Renner
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include "Course.h"

using namespace std;

// Struct for students
struct Student {
	string fName, lName;
	float grade1 =0, grade2 = 0, grade3 = 0, grade4 = 0, grade5 = 0, gradeAvg = 0;
	};

// Function prototypes
// Function to read in a file and stuff in vector
void OpenCIT1325(vector<Student>& list);
void OpenCIT1350(vector<Student>& list);

// Function for holding all available classes
void CourseList(vector<Course>& list);

int main() {
	vector<Course> vCourseList;
	vector<Student> vStudentList1;
	vector<Student> vStudentList2;

	int ans;
	char yn;

	CourseList(vCourseList);																//populate CourseList vector

	cout << "Would you like to see available classes? (y or n)" << endl;					//Offer CourseList
	cin >> yn;
	if (yn == 'y') {
		for (auto courses : vCourseList) {
			courses.PrintInfo();
			cout << endl;
		}
	}
	else;

	ans = vCourseList.size();																//set answer to vector size
	cout << "Enter '1' to get grades for " << vCourseList.at(ans - 1).GetName() << endl;	//select which Course
	cout << "Enter '2' to get grades for " << vCourseList.at(ans - 1).GetName() << endl;
	cin >> ans;
	
	if (ans == 1) {
		cout << "Course Name:        " << vCourseList.at(0).GetName() << endl << endl;
		cout << "Students Enrolled:  Grades:" << endl;
		OpenCIT1325(vStudentList1);															//Goto 1325 function
	}
	else if (ans == 2){
		cout << "Course Name:        " << vCourseList.at(1).GetName() << endl << endl;
		cout << "Students Enrolled:  Grades:" << endl;
		OpenCIT1350(vStudentList2);															//Goto 1350 function
	}
	
	else {
		cout << "Goodbye." << endl;
	}

	return 0;
}

void OpenCIT1325(vector<Student>& list) {
	string filename1 = "CIT1325.txt";
	ifstream inFile;
	Student s1;

	inFile.open(filename1.c_str());

	if (inFile.fail())         //Let's make sure our file opens
	{
		cout << "File failed to open.";
		exit(1);
	}

	do {
		inFile >> s1.fName >> s1.lName >> s1.grade1 >> s1.grade2 >> s1.grade3 >> s1.grade4 >> s1.grade5;
		s1.gradeAvg = (s1.grade1 + s1.grade2 + s1.grade3 + s1.grade4 +s1.grade5) / 5;

		list.push_back(s1);
	} while (inFile.good());


	for (auto stud : list) {
		string fullname;
		fullname = stud.fName + " " + stud.lName;
		cout << setw(20) << left << fullname << fixed << setprecision(1) << stud.grade1 << "  " << stud.grade2 << "  " << stud.grade3 << "  " << stud.grade4 << "  " << stud.grade5 << "  " << stud.gradeAvg << endl;
	}

	return;
}

void OpenCIT1350(vector<Student>& list) {
	string filename1 = "CIT1350.txt";
	ifstream inFile;
	Student s1;

	inFile.open(filename1.c_str());

	if (inFile.fail())         //Let's make sure our file opens
	{
		cout << "File failed to open.";
		exit(1);
	}

	do {
		inFile >> s1.fName >> s1.lName >> s1.grade1 >> s1.grade2 >> s1.grade3 >> s1.grade4 >> s1.grade5;
		s1.gradeAvg = (s1.grade1 + s1.grade2 + s1.grade3 + s1.grade4 + s1.grade5) / 5;

		list.push_back(s1);
	} while (inFile.good());

	for (auto stud : list) {
		string fullname;
		fullname = stud.fName + " " + stud.lName;
		cout << setw(20) << left << fullname << fixed << setprecision(1) << stud.grade1 << "  " << stud.grade2 << "  " << stud.grade3 << "  " << stud.grade4 << "  " << stud.grade5 << "  " << stud.gradeAvg << endl;
	}
	return;
}

void CourseList(vector<Course>& list) {
	Course c1, c2, c3, c4, c5;

	c1.SetName("Comp Information Tech");
	c1.SetInst("Mrs. Smith");
	c1.SetSect("1325");
	c1.SetRub("CIT");


	list.push_back(c1);

	c2.SetName("Advanced IT");
	c2.SetInst("Mr. Doge");
	c2.SetSect("1350");
	c2.SetRub("CIT");

	list.push_back(c2);

	c3.SetName("Physics I");
	c3.SetInst("Mrs. Basic");
	c3.SetSect("1301");
	c3.SetRub("SCI");

	list.push_back(c3);

	c4.SetName("Algebra I");
	c4.SetInst("Mr. Blanks");
	c4.SetSect("1301");
	c4.SetRub("MAT");

	list.push_back(c4);

	c5.SetName("Composition");
	c5.SetInst("Mrs. Grackel");
	c5.SetSect("1301");
	c5.SetRub("ENG");

	list.push_back(c5);

	return;
}