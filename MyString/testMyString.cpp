// Luke Rodman
// MyString Class Assignment
// 2/28/2019

#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	// Test for parameter constructor
	cout << "Test for parameter constructor:\n";
	MyString s1 = "Hello";
	MyString s2 = " World";
	cout << s1 << s2;

	// Test for copy constructor
	cout << "\n\nTest for copy constructor:\n";
	MyString s3(s1);
	cout << s1 << " = ";
	cout << s3;

	// Test for the + operator
	cout << "\n\nTest for the + operator:\n";
	cout << s1 + s2;

	// Test for the assignment operator
	cout << "\n\nTest for the = operator:\n";
	s3 = s1 + s2;
	cout << s3;

	// Test for the == operator
	bool same;
	cout << "\n\nTest for == operator:\n";
	if (s1 == s2)
	{
		same = true;
	}
	else
	{
		same = false;
	}
	if (same)
	{
		cout << "true\n";
	}
	else
	{
		cout << "false\n";
	}

	// Test for the c_str() function
	const char* ptr;
	cout << "\nTest for the c_str() function:\n";
	ptr = s1.c_str();
	cout << *ptr << " = " << *s1.c_str();


	return 0;
}