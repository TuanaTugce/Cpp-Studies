//Creates truth table for 4 variables

#include<iostream>
#include<string>
 
using namespace std;

int main()
{
	int Z;
	int a[2] = { 0,1 }, b[2] = { 0,1 }, c[2] = {0,1}, d[2] = {0,1};

	cout << "a  b  c  d     G" << endl;

	for(int i=0;i<=1;i++)
		for(int j=0;j<=1;j++)
			for(int k=0;k<=1;k++)
				for (int y = 0; y <= 1; y++)
				{
					cout << i << "  " << j << "  " << k << "  " << y << "  ";
					Z = (!b[j] && c[k] && !d[y]) || (a[i] && b[j] && !c[k]);

					cout << "   "<< Z << endl;
				}
					
	//F = !(!a[i] && !(!a[i] && d[y])) && (!a[i] || (b[j] && c[k]));
	//G = !(!a[i] && d[y]) && (!a[i] || b[j] && c[k]);
	

	return 0;
}
