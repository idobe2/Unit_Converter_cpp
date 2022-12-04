#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Metric
{
private:
	std::vector<std::string> list;
	int number;
	//enum string_code {
	//	e_mm,
	//	e_cm,
	//	e_m,
	//	e_dm,
	//};
public:
	Metric();
	Metric(int);
	Metric(const Metric&);
	~Metric();
	void setNum(int number) { this->number = number; }
	int getNum() {return number;}
	int convert(string, string, int number);
	void printNum() { cout << getNum() << endl; }
	void initList();
	std::vector<std::string> getList();
	/*string_code hashit(std::string const& inString)
	{
		if (inString == "mm") return e_mm;
		if (inString == "cm") return e_cm;
		if (inString == "m") return e_m;
		if (inString == "dm") return e_dm;
	}*/
};
