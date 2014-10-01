#include <iostream>
using namespace std;

int multiple(int m, int n)
{
	int mult = m * n, NOD;		   // ����� ����������� ���������� mult �������� n*m �.�. � ����������� ��� ����� ����������. ������ ���������� ��� (���������� ����� ��������).
	if (m == n)					   // ��� ���� ������ ����� ����� �� ��������.
		return mult = n;
	
	while ((m != 0) && (n != 0))   // ����, ����������� ��� (�������� �������).
	{
		if (m > n)
			m = m % n;
		else
			n = n % m;
	}
	NOD = n + m;
	mult /= NOD;                  // ��� = ������������ ���� ����� (m, n), �������� �� ���������� ����� ��������.
	return mult;
}
void main()
{
	setlocale(LC_ALL, "rus");
	int m, n;
	cout << "������� m: ";
	cin >> m;
	cout << "������� n: ";
	cin >> n;
	cout << "���������� ����� ������� = " << multiple(m, n) << endl;
	system("pause");
	
}