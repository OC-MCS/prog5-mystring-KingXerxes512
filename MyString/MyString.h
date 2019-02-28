#pragma once

class MyString
{
private:
	char* string;
public:
	// Constuctors
	MyString();
	MyString(char*);
	MyString(const MyString &obj);
	// Destructor
	~MyString();
	// Overloaded Operators
	MyString operator+(MyString&);
	MyString operator=(MyString&);
	bool operator==(MyString&);

	void writeString();
};
