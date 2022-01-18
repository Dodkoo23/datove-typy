// pretypovanie.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << " zadaj cele cislo" << endl;
	cin >> a;

	cout << " Hodnota a po pretypovani= " << (char)a << endl;

	float b;
	cout << " zadaj desatinne cislo" << endl;
	cin >> b;

	const double pi = 3.14;
	float polomer;
	polomer = b / 2;
	float obvod;
	obvod = 2 * pi * polomer;
	cout << "obvod kruhu je " << obvod << endl;
	return 0;
}



