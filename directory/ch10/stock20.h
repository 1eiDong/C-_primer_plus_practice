// augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include<string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	// two constructors
	Stock(); // default constructor
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock(); //noisy deconstructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;
	const Stock& topval(const Stock& s) const;
	//// methods for return exact value
	//std::string company() const { return company; }
	//long shares() const { return shares; }
	//double share_val() const { return share_val; }
	//double total_val() const { return total_val; }

};


#endif