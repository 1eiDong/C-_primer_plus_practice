// Person class declaration
#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include<string>
class Person
{
private:
	static const int LIMIT = 25;
	std::string lname; // last name
	char fname[LIMIT]; // first name
public:
	Person() { lname = ""; fname[0] = '\0'; } // #1
	Person(const std::string& ln, const char* fn = "Heyyou"); // #2
	~Person();
	void Show() const;         // firstname lastname format
	void FormalShow() const;   // lastname firstname format

};
#endif // !PERSON_H_
