#include "STUDENT.H"

void main() {
	Student student1; Student student2; Student student3; Student student4; Student student5;

	Student array[5] = { student1,student2,student3,student4,student5 };

	student1.userinput(student1);
	cout << "\nThe name is " << student1.getname();
}

	/*for (int i = 0; i < 1; i++) {
		cout << "Student " << i + 1 << endl;
		array[i].userinput(array[i]);
		cout << "\n\n";
	}
	cout << "\n" << array[0].getaverage() << student1.getaverage();
} */