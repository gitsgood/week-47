#include "STUDENT.h"
#include "STUDENTINTERFACE.h"

void Student::userInput() {

	cout << "Please enter the student's name...\n";
	cin >> newname;
	setname(newname);
	cout << "Please enter the student's surname...\n";
	cin >> newsurname;
	setsurname(newsurname);
	cout << "You will now enter the student's courses...\n";
	setcourses();
	cout << "Please enter the student's average grade...\n";
	cin >> newaverage;
	setaverage(newaverage);
}

void Student::presentableOutput() {

	if (getname().length() < studentName.length()) {
		cout << getname();
		for (int i = 0; i < studentName.length() - getname().length(); i++) {
			cout << " ";
		}
	}
	else
		cout << "Incompatible Name";

	if (getsurname().length() < studentSurname.length()) {
		cout << getname();
		for (int i = 0; i < studentSurname.length() - getsurname().length(); i++) {
			cout << " ";
		}
	}
	else
		cout << "Incompatible Surname";

	string concatenatedCoursesArray = ""; // We reconvert the array into a string for easier usage (very intuitive...)

	for (int i = 0; i < 3; ++i) {  // Classes always amount to 3, no need for array size variable.
		concatenatedCoursesArray += getcourses(i); 
		if (i < 3) {
			concatenatedCoursesArray += ","; 
		}
	}

	if (concatenatedCoursesArray.length() < classes.length()) {
		cout << concatenatedCoursesArray;
		for (int i = 0; i < classes.length(); i++) {
			cout << " ";
		}
	}
	else
		cout << "Incompatible Classes";

	cout << getaverage();
}