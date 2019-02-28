#pragma once

class MyString
{
private:
	char* string;
public:
	// Constuctors
	MyString();
	MyString(const char*);
	MyString(const MyString &obj);
	// Destructor
	~MyString();
	// Overloaded Operators
	MyString operator+(const MyString&);
	MyString operator=(const MyString&);
	bool operator==(const MyString&);
	// Getter function (returns internal c-string pointer as a const pointer
	const char* c_str();
};
