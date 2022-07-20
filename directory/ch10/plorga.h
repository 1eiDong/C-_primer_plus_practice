// class Plorga declaration
#pragma once
#ifndef PLORGA_H_
#define PLORGA_H_
#include<cstring>
class Plorga
{
private:
	char name[20];
	int CI;
public:
	Plorga(const char* nm);
	void setCI(int ci);
	void showPL() const;
	Plorga() { strcpy_s(name, "Plorga"); CI = 0; }
};
#endif // !PLORGA_H_

