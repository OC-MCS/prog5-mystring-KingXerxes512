#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

MyString::MyString()
{
	// Loads the cstring with just a NULL byte
	string = nullptr;
}

MyString::MyString(char* s)
{
	string = new char[strlen(s) + 1];
	strcpy_s(string, strlen(s) + 1, s);
}

MyString::MyString(const MyString &obj)
{
	string = obj.string;
}

MyString MyString::operator+(MyString& s2)
{
	MyString newString;
	int newLen = strlen(string) + strlen(s2.string) + 1;
	newString.string = new char[newLen];
	strcpy_s(newString.string, newLen, string);
	strcat_s(newString.string, newLen, s2.string);

	return newString;
}

//MyString MyString::operator=(MyString& s2)
//{
//	
//}

bool MyString::operator==(MyString& s2)
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

MyString::~MyString()
{
	delete[] string;
}

void MyString::writeString()
{
	cout << string;
}