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

string Student::getcourses(int i){
	return courses[i];
}

void Student::setcourses() {
	for (int i = 1; i < 4; i++)
	{
		cout << "Enter course " << i << endl;
		getline(cin >> ws, courses[i-1]);
	}
}

string Student::getaverage() {
	return average;
}

void Student::setaverage(string newaverage) {
	for (auto& x : newaverage) {
		x = toupper(x);
	}
	if (newaverage[0] >= 'A' && newaverage[0] <= 'F') {
		if (newaverage.length() > 1 && (newaverage[1] == '+' || newaverage[1] == '-')) {
			average = string(1, newaverage[0]) + newaverage[1]; // Concatenate first character with '+' or '-'
		}
		else {
			average = string(1, newaverage[0]); // Only the first character
		}
	}
	else {
		average = "Irregular";
	}
}