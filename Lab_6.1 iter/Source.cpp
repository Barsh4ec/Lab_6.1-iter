#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void Create(int *a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	cout << " a[22] = {";
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i] << ",";
	cout << "}" << endl;
}

void Kilk(int* a, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 3 == 0)
			k++;
	cout << " к≥льк≥сть елемент≥в, €к≥ задовольн€ють вказаному критер≥ю = " << k << endl;
}

void Sum(int *a, const int size)
{
	int s = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 3 == 0)
			s += a[i];
	cout << " —ума елемент≥в, €к≥ задовольн€ють вказаному критер≥ю = " << s << endl;
}

void Zam(int* a, const int size)
{
	cout << " a[22] = {";
	for (int i = 0; i < size; i++)
		if (a[i] > 0 && a[i] % 3 == 0)
			cout << setw(4) << 0 << ",";
		else
			cout << setw(4) << a[i] << ",";
	cout << "}" << endl;
		
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	const int n = 22;
	int a[n];

	int Low = -10;
	int High = 35;

	Create(a, n, Low, High);
	Print(a, n);
	Kilk(a, n);
	Sum(a, n);
	Zam(a, n);

	return 0;
}