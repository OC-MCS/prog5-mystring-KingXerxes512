#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;



int main()
{
	bool same;
	char* ptr;
	char* ptr2;
	char a[] = "Hello";
	char b[] = " World\n";
	ptr = a;
	ptr2 = b;

	// Test for parameter constructor
	cout << "Test for parameter constructor:\n";
	MyString s1(ptr);
	MyString s2(ptr2);
	s1.writeString();
	s2.writeString();

	// Test for copy constructor
	cout << "\nTest for copy constructor:\n";
	MyString s3(s1);
	s3.writeString();

	// Test for the == operator
	cout << "\nTest for == operator:\n";
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

	return 0;
}