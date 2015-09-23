#include <iostream>
using namespace std;

// add takes two integers as parameters, and returns the result 
// of their sum
// add does not care what the exact values of x and y are
int add(int x, int y)
{
	return (x + y);
}


int main()
{
	// It is the caller of add() that decide the exact values of x and y
	cout << add(4,5) << endl;	//x=4 and y=5 are the parameters
	return 0;
}
