#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int  n, mx = -99999;
	cout << "������� ������������������ �����, �������������� �� ����" << endl;
	cin >> n;
	while (n != 0) {
		if (mx < n) {
			mx = n;
		}
		cin >> n;
	}
	if (mx < 0) {
		cout << "���������� ����� � ������������������: " << "0" << endl;
	}
	else cout << "���������� ����� � ������������������: " << mx << endl;
	return 0;
}