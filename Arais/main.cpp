#include<iostream>
using namespace std;
#define MASSIV
#define ZNACENIE 
#define PORADOK
#define SUMMA 
#define OBRATNAJ 
void main()
{
	setlocale(LC_ALL, "");
	int sum=0;
	const int SIZE = 5;
	int arr[SIZE];
#ifdef MASSIV 
	cout << int() << endl;
	arr[2] = 2048;
	cout << arr[2] << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // MASSIV 
	// Ввести значение массива 
#ifdef ZNACENIE 
	cout << "Введите элементы массива: " << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Элементы массива: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ZNACENIE 
// Вывод элементов массива на экран в прямом порядке
#ifdef PORADOK 
	cout << "Элементы массива в прямом порядке:" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
#endif // PORADOK 
	///Вывод массива в обратном порядке
#ifdef OBRATNAJ
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;
#endif // OBRATNAJ

// Вычисление суммы элементов массива
#ifdef SUMMA 
	for (int i = 0; i < SIZE; ++i)
	{
		sum += arr[i];
	}
		cout << "Сумма элементов массива: " << sum << endl;
		cout << "Среднее-арифмитическое элементов массива:" << (double)sum / SIZE << endl;
#endif // SUMMA 
		//Поиск мин и мак
		int min, max;
		min = max = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] < min)min = arr[i];
			if (arr[i] >max)max = arr[i];
		}
		cout << "Минимальное значение в массиве:" << min << endl;
		cout << "Максимальное значение в массиве:" << max << endl;
}
