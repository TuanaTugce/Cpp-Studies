/*
0		     1
1		    1 1
2		   1 2 1
3		  1 3 3 1
4		 1 4 6 4 1
5	   1 5 10 10 5 1
*/ 


#include<iostream>

using namespace std;

void pascal (int);

class Pascals {
private:
	int arr[33];

public:
	void getArray(int n)
	{
		arr[0,0] = 1;
		if (n == 0)
			return;
		arr[n,n] = 1;
		for(int j = 2; j < n; j++)
			for (int i = 1; i < n; i++)
			{
				arr[j, i] = arr[j - 1, i - 1] + arr[j - 1, i];
			}
	}

	void printArray(int n)
	{
		
		for (int i = 0; i <= n; i++)
			cout << arr[i] << " " ;

	}
};



int main()
{
	int index;

	cout << "Row index : ";
	cin >> index;

	pascal(index);

	return 0;
}

void pascal (int rowNumber)
{
	Pascals row;
	row.getArray(rowNumber);
	row.printArray(rowNumber);
}
