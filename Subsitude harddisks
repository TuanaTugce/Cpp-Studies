#include<iostream>

using namespace std;

class HardDisk {
private:
	string mark;
	string type;
	int capacity;

public:
	HardDisk(string mark, string type, int capacity)
	{
		this->mark = mark;
		this->type = type;
		this->capacity = capacity;
	}

	bool operator== (const HardDisk& other)
	{
		return (type == other.type) && (capacity == other.capacity);
	}
};

int main()
{
	HardDisk d1("Toshiba", "SSD", 500);
	HardDisk d2("WD", "SSD", 500);
	if (d1 == d2)
		cout << "d1 and d2 are equivalent ";
	else
		cout << "d1 and d2 are not equivalent ";



	return 0;
}
