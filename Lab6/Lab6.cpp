#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int f1 = 0; // total f cost
	int f2 = 0; // total f cost 2
	int l[] = { 0,1,2,3,4,5 }; //index
	int start[] = { 1,12 }; //g cost of s
	int a[] = { 3,1 }; //g cost of a
	int b[] = { 3 }; //g cost of b
	int c[] = { 1,2 }; //g cost of c
	int d[] = { 3 }; //g cost of d
	int h[] = { 4,2,6,2,3,0 }; // h cost
	int i = 0;
	cout << "S -> ";
	while (i != 5)
	{
		if (l[i] == 0)
		{
			f1 = start[0] + h[i + 1];
			f2 = start[1] + h[i + 5];
			if (f1 < f2)
			{
				cout << "A -> ";
				i = 1;
			}
			else
			{
				cout << "G";
				i = 5;
			}
		}
		else if (l[i] == 1)
		{
			f1 = a[0] + h[i + 1];
			f2 = a[1] + h[i + 2];
			if (f1 < f2)
			{
				cout << "B -> ";
				i = 2;
			}
			else
			{
				cout << "C -> ";
				i = 3;
			}
		}
		else if (l[i] == 2)
		{
			f1 = b[0] + h[i + 2];
			cout << "D -> ";
			i = 4;
		}
		else if (l[i] == 3)
		{
			f1 = c[0] + h[i + 1];
			f2 = c[1] + h[i + 2];
			if (f1 < f2) {
				cout << "D
					-> "
					;
				i = 4;
			}
			else {
				cout << "G"
					;
				i = 5;
			}
		}
		else if (l[i] == 4) {
			f1 = d[0] + h[i + 1];
			cout << "G"
				;
			i = 5;
		}
	}
}