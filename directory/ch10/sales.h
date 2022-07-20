// class Sales declaration
#pragma once
#ifndef SALES_H_
#define SALES_H_

class Sales
{
	enum {QUARTERS=4};
private:
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	Sales(const double ar[], int n);
	Sales();
	void showSales() const;
	void calsales(int n);
};
#endif // !SALES_H_
