#include "Metric.h"

Metric::Metric() {}

Metric::Metric(long) { setNum(number); }

Metric::Metric(const Metric& other) { setNum(other.number); }

Metric::~Metric()
{
	cout << "detructing: ";
	printNum();
	cout << "\n_______" << endl;
}

long Metric::convert(string source, string dest, long number) {
	if (source.compare(dest))
		return number;
	else if (!source.compare("cm"))
		switch (hashit(source))
		{
		case e_mm:
			setNum(getNum() * 10);
		case e_m:
			setNum(getNum() * 100);
		default:
			break;
		}
	switch (hashit(dest))
	{
}