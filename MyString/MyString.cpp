#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

// Default Constructor
MyString::MyString()
{
	// Loads the cstring with just a NULL byte
	string = nullptr;
}

// Initialization Constructor
// Allocates memory needed for string to be stored and copies the string
MyString::MyString(const char* s)
{
	string = new char[strlen(s) + 1];
	strcpy_s(string, strlen(s) + 1, s);
}

// Copy Constructor
// If the string to be copied isn't NULL, it allocate the necessary memory and then copy the string
MyString::MyString(const MyString &copy)
{
	if (copy.string)
	{
		string = new char[strlen(copy.string) + 1];
		strcpy_s(string, strlen(copy.string) + 1, copy.string);
	}
}

// + Operator Overload
// Creates a return object
// allocates the memory needed to store both strings and the null byte into return object
// copies the first string into return object, then concatenates the second string into return object
MyString MyString::operator+(const MyString& s2)
{
	MyString newString;
	int newLen = strlen(string) + strlen(s2.string) + 1;
	newString.string = new char[newLen];
	strcpy_s(newString.string, newLen, string);
	strcat_s(newString.string, newLen, s2.string);

	return newString;
}

// = Operator Overload
// Creates a return object
// Allocates the memory needed to assign argument into return object
// Copies the argument into the return object
MyString MyString::operator=(const MyString& s2)
{
	MyString newString;
	int len = strlen(s2.string) + 1;
	newString.string = new char[len];
	strcpy_s(newString.string, len, s2.string);

	return newString;
}

// == Operator Overload
// First, compares string lengths of both sides of the operator
// If they are equal, it can continue on. If they are != , they are deemed to not be the same string
// Second, if the lengths are equal, runs for loop until counter == the string length
// Compares every value of the string and if one of the respective pairs is != , it is deemed to not be the same string
bool MyString::operator==(const MyString& s2)
{
	bool sameSize;
	bool sameString = true;
	if (strlen(string) == strlen(s2.string))
	{
		sameSize = true;
	}
	else
	{
		sameString = false;
		sameSize = false;
	}
	if (sameSize)
	{
		for (int index = 0; index < strlen(string) + 1; index++)
		{
			if (string[index] != s2.string[index])
			{
				sameString = false;
			}
		}
	}
	return sameString;
}

// Destructor
// Deletes the allocated memory any time a function is destroyed
MyString::~MyString()
{
	delete[] string;
}

//void MyString::writeString()
//{
//	cout << string;
//}

// c_str() Function
// Returns the char* dubbed "string" of the instance called on
const char* MyString::c_str()
{
	return string;
}

// << Operator Overload
ostream& operator<<(ostream& strm, const MyString& s2)
{
	strm << *s2.c_str();
	return strm;
}