#include<iostream>
using namespace std;

class Complex {
private:
	int real;
	int image;

public:
	Complex()
	{
	}

	Complex(int r, int i)
	{
		real = r;
		image = i;
	}

	Complex operator +(Complex const& obj)
	{
		Complex res;

		res.real = real + obj.real;
		res.image = image + obj.image;
		
		return res;
	}

	void print()
	{
		cout <<" "<< real << "+" << image << "i" << endl;
	}
};


int main()
{
	Complex n1(2, 8);
	Complex n2(3, 5);

	Complex n3 = n1 + n2;

	n1.print();
	n2.print();
	cout << "+______" << endl;
	n3.print();

	return 0;
}
