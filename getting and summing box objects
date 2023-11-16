#include<iostream>

using namespace std;

class Box {
private:
	double length;
	double height;
	double breadth;

public:
	void setLength(double length)
	{
		this->length = length;
	}

	void setBreadth(double breadth)
	{
		this->breadth = breadth;
	}

	void setHeight(double height)
	{
		this->height = height;
	}

	double getVolume()
	{
		return length * height * breadth;

	}

	Box operator+ (const Box& b)
	{
		Box box;

		box.length = length + b.length;
		box.height = height + b.height;
		box.breadth = breadth + b.breadth;

		return box;
	}
};

int main()
{
	Box b1,b2,b3;

	b1.setLength(6.0);
	b1.setBreadth(7.0);
	b1.setHeight(5.0);

	b2.setLength(12.0);
	b2.setBreadth(13.0);
	b2.setHeight(10.0);

	cout << "Volume of box1 : " << b1.getVolume() << endl;
	cout << "Volume of box2 : " << b2.getVolume() << endl;

	b3 = b1 + b2;

	cout << "Volume of box3: " << b3.getVolume() << endl;

	return 0;
}
