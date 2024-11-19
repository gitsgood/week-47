#include "STUDENT.h"

void Student::userinput(Student student) {

	cout << "Please enter the student's name...\n";
	cin >> newname;
	student.setname(newname);
}
	/*cout << "Please enter the student's surname...\n";
	cin >> newsurname;
	student.setsurname(newsurname);
	cout << "You will now enter the student's courses...\n";
	student.setcourses();
	cout << "Please enter the student's average grade...\n";
	cin >> newaverage;
	student.setaverage(newaverage);
}*/