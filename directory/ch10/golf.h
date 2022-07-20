// class Golf declaration
#pragma once
#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
	enum {Len=40};
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name, int hc);
	Golf();
	void sethc(int hc);
	void showgolf() const;
};
#endif // !GOLF_H_

