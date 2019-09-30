// ivan11.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, K, s;
	cout << "Введите, пожалуйста N (>1): " << endl;
	cin >> N;
	a = 0;
	s = 0;
	if (N <= 1)
	{
		cout << "Пардон, данные некоректны :)" << endl;
	}
	else
	{
		while (s < N) {
			a++;
			s = s + a;
		}
		cout << "К = " << a << endl;
		cout << "Сумма = " << s << endl;
	}
	return 0;
}
