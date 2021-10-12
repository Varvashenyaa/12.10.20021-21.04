#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int o;
	cout << "Введите номер месяца"<<endl; 
	cin >> o;
	while (o < 0 || o>12)
	{
		cout << "Такого месяца нет, введите значение от 1 до 12:" << endl;
		cin >> o;
	}
	switch (o) {
	case 1: cout << "Январь"<<endl << "Зима"; break; 
	case 2: cout << "Февраль" << endl << "Зима"; break;
	case 3: cout << "Март" << endl << "Весна"; break;
	case 4: cout << "Апрель" << endl << "Весна"; break;
	case 5: cout << "Май" << endl << "Весна"; break;
	case 6: cout << "Июнь" << endl << "Лето"; break;
	case 7: cout << "Июль" << endl << "Лето"; break;
	case 8: cout << "Август" << endl << "Лето"; break;
	case 9: cout << "Сентябрь" << endl << "Осень"; break;
	case 10: cout << "Октябрь" << endl << "Осень"; break;
	case 11: cout << "Ноябрь" << endl << "Осень"; break;
	case 12: cout << "Декабрь" << endl << "Зима"; break;

	}
}