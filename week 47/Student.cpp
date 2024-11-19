#include "STUDENT.h"

string Student::getname() {
	return name;
}

void Student::setname(string newname) {
	name = newname;
}

string Student::getsurname() {
	return surname;
}

void Student::setsurname(string newsurname) {
	surname = newsurname;
}

void Student::getcourses()
{
	for (int i = 0; i < 3; i++)
	{
		cout << courses[i] << "\n";
	}
}

void Student::setcourses() {
	for (int i = 1; i < 4; i++)
	{
		cout << "Enter course " << i << endl;
		getline(cin >> ws, courses[i]);
	}
}

string Student::getaverage() {
	return average;
}

void Student::setaverage(string newaverage) {
	if (newaverage[1] == '+' || newaverage[1] == '-') {
		average = newaverage[0] + newaverage[1];
	}
	else{
		average = newaverage[0];
	}
}