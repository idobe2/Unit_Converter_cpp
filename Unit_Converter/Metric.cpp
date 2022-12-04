#include "Metric.h"

Metric::Metric() {
	initList();
	cout << list.size() << endl;
	/*for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << endl;
	}*/
}

Metric::Metric(int) { setNum(number); }

Metric::Metric(const Metric& other) { setNum(other.number); }

Metric::~Metric()
{
	cout << "detructing: ";
	printNum();
	cout << "\n_______" << endl;
}

void Metric::initList()
{
	list.push_back("Millimeter"); // 0
	list.push_back("Centimeter"); // 1
	list.push_back("Decimeter"); // 2
	list.push_back("Meter"); // 3
}

std::vector<std::string> Metric::getList() {
	if (!list.empty())
		return list;
}

int Metric::convert(string source, string dest, int number) {
	for (int i=0; i<list.size(); i++)
		if (source.compare(list[i]))
		{
			switch (i)
			{
			case 0: // mm -> cm
				setNum(getNum() / 10);
			case 2: // dm -> cm
				setNum(getNum() * 10);
			case 3: // m -> cm
				setNum(getNum() * 100);
			default:
				return getNum();
			}
			break;
		}
	for (int i = 0; i < list.size(); i++)
		if (dest.compare(list[i]))
		{
			switch (i)
			{
			case 0: // cm -> mm
				setNum(getNum() * 10);
			case 2: // cm -> dm
				setNum(getNum() / 10);
			case 3: // cm -> m
				setNum(getNum() / 100);
			default:
				return getNum();;
			}
			break;
		}
	return getNum();
}