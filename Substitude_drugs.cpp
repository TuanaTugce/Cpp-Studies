#include<iostream>

using namespace std;

class Drug {
private:
	string name;
	string active_ingredient;
	int amount_ingredient;

public:
	Drug(string name, string active_ingredient, int amount_ingredient)
	{
		this->name = name;
		this->active_ingredient = active_ingredient;
		this->amount_ingredient = amount_ingredient;
	}

	bool operator== (const Drug& other)
	{
		return (active_ingredient == other.active_ingredient) && (amount_ingredient == other.amount_ingredient);
	}
};

int main()
{
	Drug d1("Parol", "Parasetamol", 500);
	Drug d2("Parol", "Parasetamol", 250);
	Drug d3("Panadol", "Parasetamol", 500);

	if (d1 == d2)
		cout << "d1 and d2 are equal" << endl;
	else
		cout << "d1 and d2 are not equal" << endl;

	if (d1 == d3)
		cout << "d1 and d3 are equal" << endl;
	else
		cout << "d1 and d3 are not equal" << endl;


	return 0;
}
