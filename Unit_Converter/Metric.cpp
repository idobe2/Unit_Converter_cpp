#include "Metric.h"

Metric::Metric() {}

Metric::Metric(int) { setNum(number); }

Metric::Metric(const Metric& other) { setNum(other.number); }

Metric::~Metric()
{
	cout << "detructing: ";
	printNum();
	cout << "\n_______" << endl;
}

int Metric::convert(string source, string dest, int number) {
	if (source.compare(dest))
		return number;
	else if (!source.compare("cm"))
		switch (hashit(source)) // convert all to cm
		{
		case e_mm: // mm -> cm
			setNum(getNum() / 10);
		case e_dm: // dm -> cm
			setNum(getNum() * 10);
		case e_m: // m -> cm
			setNum(getNum() * 100);
		default:
			return getNum();
		}
	switch (hashit(dest))
	{
	case e_mm: // cm -> mm
		setNum(getNum() * 10);
	case e_dm: // cm -> dm
		setNum(getNum() / 10);
	case e_m: // cm -> m
		setNum(getNum() / 100);
	default:
		return getNum();;
	}
	return getNum();
}