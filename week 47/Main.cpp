#include "STUDENT.H"
#include "STUDENTINTERFACE.h"

void main() {
	Student student1; Student student2; Student student3; Student student4; Student student5;

	Student array[5] = { student1,student2,student3,student4,student5 };

	for (int i = 0; i < 5; i++) {
		cout << "Please enter the details of student " << i + 1 << endl;
		array[i].userInput();
		cout << "\n\n";
	}

	cout << studentName << studentSurname << classes << averageGrade << "\n\n";
	for (int i = 0; i < 5; i++) {
		array[i].presentableOutput();
		cout << "\n\n";
	}
} 