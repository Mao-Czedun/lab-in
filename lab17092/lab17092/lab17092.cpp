#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, ct = 0;
	cout << "������� ������������������ � ����� ������� 0" << endl;
	cin >> a;
	while (a!=0){
		if (((a % 10) > (a % 100)/10)&&(a>=10)) {
			ct++;
		}
		cin >> a;
	}
	if (ct == 0) {
		cout << "����� ����" << endl;
	}
	else cout << "����� ����" << ", ���������� �����:" << ct << endl;
	return 0;
}