#include <iostream>
#include <ctime>


using namespace std;

/*void Classroom(int students[]) {
	for (int i = 0; i < 30; i++) {
		cout << "Grade of Student #" << i + 1 << " is : ";
		cin >> students[i];
	}
}
*/
double averageGrade(int students[], int totalStudent) {
	double average=0;
	for (int i = 0; i < totalStudent; i++)
		average = average + students[i];

	return (average / totalStudent);

}

int highestGrade(int students[], int& studentNum, int totalStudent) {
	int highest = students[0];
	studentNum = 0;
	for (int i = 1; i < totalStudent; i++) {
		if (students[i] >= highest) {
			highest = students[i];
			studentNum = i;
		}
	}
	return highest;
}

int lowestGrade(int students[],int& studentNum, int totalStudent) {
	int lowest = students[0];
	studentNum = 0;
	for (int i = 1; i < totalStudent; i++) {
		if (students[i] <= lowest) {
			lowest = students[i];
			studentNum = i;
		}
	}
	return lowest;
}

void compareGrade(int students[], string studentNames[], int totalStudent) {
	srand(time(0));
	int maxValue = totalStudent, minValue = 1;
	int student1 = rand() % ((maxValue - minValue + 1) + minValue);
	int student2 = rand() % ((maxValue - minValue + 1) + minValue);
	//Makes sure two different students are chosen.
	while (student2 == student1) {
		student2 = rand() % ((maxValue - minValue + 1) + minValue);
	}
	cout << "We will be comparing TWO random students : " << endl << endl;

	cout << "Student #1 is : " << studentNames[student1 - 1] << " with a grade of " << students[student1 - 1] << endl;

	cout << "Student #2 is : " << studentNames[student2 - 1] << " with a grade of " << students[student2 - 1] << endl;
	cout << endl;

	if (students[student1-1] > students[student2-1])
		cout << studentNames[student1-1] << " has a higher grade than " << studentNames[student2-1] << endl;

	else if (students[student1-1] < students[student2-1]) 
		cout << studentNames[student2-1] << " has a higher grade than " << studentNames[student1-1] << endl;

	else
		cout << studentNames[student1-1] << " has the same grade as " << studentNames[student2-1] << endl;	
}

void studentAboveAvg(int students[],string studentNames[], int totalStudent) {
	for (int i = 0; i < totalStudent; i++) {
		if (students[i] > averageGrade(students,totalStudent))
			cout << studentNames[i] << " with a grade of " << students[i] << endl;
	}
}

int main() {
	int studentNum;
	const int totalStudent = 18;
	int students[totalStudent] = { 50,90,86,91,60,79,87,51,84,99,100,73,92,54,85,73,71,91};
	string studentNames[totalStudent] = { "Jim","Juan","Jill","Yoinky","Doug","John","Kite","MeatWad","Doinky","Sloinky","Bill","Bob","Shake","Fry","Serj","Hank","Carlos","Richard" };

	
	cout << "The Average of the class is : " << averageGrade(students, totalStudent) << endl << endl;

	cout << "The Highest grade of the class is : " << highestGrade(students, studentNum, totalStudent) << ", which belongs to ";
	cout << studentNames[studentNum] << endl << endl;

	cout << "The Lowest grade of the class is : " << lowestGrade(students, studentNum, totalStudent) << ", which belongs to ";
	cout << studentNames[studentNum] << endl << endl;

	cout << "Students with a grade above averge :" << endl << endl;
	studentAboveAvg(students, studentNames, totalStudent);

	cout << endl << endl;

	compareGrade(students, studentNames, totalStudent);

}
