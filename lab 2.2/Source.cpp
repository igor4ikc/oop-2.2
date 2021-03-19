#include<iostream>
#include "Stek.h"

using namespace std;

int main()
{
	Stek a(0), b(1);
	Stek c;
	int q;
	cout << "Rozmir stekyA = "; cin >> q;
	for (int i = 0; i < q; i++)
	{
		cout << "Stek A" << endl;
		//cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		c = a + b;
		cout << endl;
	}
	cout << "Rozmir stekyB = "; cin >> q;
	for (int i = 0; i < q; i++)
	{
		cout << "Stek B" << endl;
		cout << "a = "; cin >> a;
		//cout << "b = "; cin >> b;
		c = b + a;
		cout << endl;
	}
	cout << "Stek A = " << a;
	cout << "Stek B = " << b << endl;

	cout << "Chislo = "; cin >> q;
	c = a * q;
	c = b * q;
	cout << "Stek A = " << a;
	cout << "Stek B = " << b << endl;;

	bool w = a == b;
	cout << "Rivnist chisla = " << w << endl << endl;

	cout << "Chislo = "; cin >> q;
	a += q;
	b += q;
	cout << "Stek A = " << a;
	cout << "Stek B = " << b;

	a.Pop();
	b.Pop();

}
