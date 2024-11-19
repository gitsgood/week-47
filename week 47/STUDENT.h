#pragma once
#include <iostream>
#include <string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

class Student {
private:
	string name = "";
	string surname = "";
	string courses[3] = { "","",""};
	string average = "";
public:

	string newname; string newsurname; string newaverage;

	string getname();
	void setname(string newname);
	
	string getsurname();
	void setsurname(string newsurname);
	
	void getcourses();
	void setcourses();
	
	string getaverage();
	void setaverage(string newaverage);

	void userinput(Student student);
};



#endif