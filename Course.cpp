#include "Course.h"
#include <iostream>
#include <string>
using namespace std;


// Class
// CRN, Rubric(COSC, Math,...), Section, Course-Name, Instructor, Days, Time, Class Seats, # Students Enrolled, Class openings.

void Course::SetName(string usercourseName) {
	courseName = usercourseName;
}

string Course::GetName() {
	return courseName;
}

void Course::SetSect(string clSection) {
	section = clSection;
}

string Course::GetSect() {
	return section;
}

void Course::SetInst(string clIns) {
	instruc = clIns;
}

string Course::GetInst() {
	return instruc;
}

void Course::SetRub(string clrubric) {
	rubric = clrubric;
}

string Course::GetRub() {
	return rubric;
}


void Course::PrintInfo() {
	cout << "Course Information: " << endl;
	cout << "   Name:       " << courseName << endl;
	cout << "   Rubric:     " << rubric << endl;
	cout << "   Section:    " << section << endl;
	cout << "   Instructor: " << instruc << endl;
}