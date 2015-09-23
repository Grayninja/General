// howNotRun.cpp
// Calculate best student score using array but off-by-one
// in loop.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	// total number of students
	const int nNumberOfStudents = 5;
	// score of each student
	int anScore[ nNumberOfStudents ] = { 84, 92, 76, 81, 56 };
	// calculate highest score
	int nMaxStudentScore = 0;
	
	for (int nStudent = 0; nStudent <= nNumberOfStudents; ++nStudent) 
	{
		cout << anScore[ nStudent ] << endl;
		// test for highest score
		if (anScore[ nStudent ] > nMaxStudentScore) {
			nMaxStudentScore = anScore[ nStudent ];
		}	
	}
	
	cout << "Number of students: " << nNumberOfStudents << endl;
	cout << "Highest score: " << nMaxStudentScore << endl;

	return 0;	
}
