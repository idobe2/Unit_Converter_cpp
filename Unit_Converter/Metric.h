#pragma once
#include <iostream>

using namespace std;

class Metric
{
private:
	long number;
	enum string_code {
		e_mm,
		e_cm,
		e_m,
	};

public:
	Metric();
	Metric(long);
	Metric(const Metric&);
	~Metric();
	void setNum(long number) { this->number = number; }
	long getNum() {return number;}
	bool isValid();
	long convert(string, string, long number);
	void printNum() { cout << getNum() << endl; }
	string_code hashit(std::string const& inString)
	{
		if (inString == "mm") return e_mm;
		if (inString == "cm") return e_cm;
		if (inString == "m") return e_m;
	}
};
