#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int  n, mx = -99999;
	cout << "¬ведите последовательность чисел, оканчивающуюс€ на ноль" << endl;
	cin >> n;
	while (n != 0) {
		if (mx < n) {
			mx = n;
		}
		cin >> n;
	}
	if (mx < 0) {
		cout << "Ќаибольшее число в последовательности: " << "0" << endl;
	}
	else cout << "Ќаибольшее число в последовательности: " << mx << endl;
	return 0;
}