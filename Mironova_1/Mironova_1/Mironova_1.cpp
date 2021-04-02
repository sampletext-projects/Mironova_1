#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "Russian");
	double a, b, alpha;
	cout << "a(большее основание):" << endl;
	cin >> a;
	cout << "b(меньшее основание):" << endl;
	cin >> b;
	cout << "alpha:" << endl;
	cin >> alpha;

	double h = (a - b)*tan(alpha)/2; //нахожу высоту через тангенс

	double square = (a + b) * h / 2;//нахожу площадь
	cout << square;
}

