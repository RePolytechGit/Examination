#include <iostream>
using namespace std;

int multiple(int m, int n)
{
	int mult = m * n, NOD;		   // Сразу присваиваем переменной mult значение n*m т.к. в последствии они будут изменяться. Вводим переменную НОД (Наименьший общий делитель).
	if (m == n)					   // НОК двух равных чисел равно их значению.
		return mult = n;
	
	while ((m != 0) && (n != 0))   // Цикл, вычисляющий НОД (Алгоритм Евклида).
	{
		if (m > n)
			m = m % n;
		else
			n = n % m;
	}
	NOD = n + m;
	mult /= NOD;                  // НОК = произведение двух чисел (m, n), деленное на наименьший общий делитель.
	return mult;
}
void main()
{
	setlocale(LC_ALL, "rus");
	int m, n;
	cout << "Введите m: ";
	cin >> m;
	cout << "Введите n: ";
	cin >> n;
	cout << "Наименьшее общее кратное = " << multiple(m, n) << endl;
	system("pause");
	
}