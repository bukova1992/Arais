#include<iostream>
using namespace std;
#define MASSIV
#define ZNACENIE 
#define PORADOK
#define SUMMA 
void main()
{
	setlocale(LC_ALL, "");
	int sum; 
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
	cout << "Введите размер массива: " << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Элементы массива: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
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
// Вычисление суммы элементов массива
#ifdef SUMMA 
	for (int i = 0; i < SIZE; ++i)
	{
		sum += arr[i];
		cout << "Сумма элементов массива: " << sum << endl;
#endif // SUMMA 

}