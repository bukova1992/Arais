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
	// ������ �������� ������� 
#ifdef ZNACENIE 
	cout << "������� ������ �������: " << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "�������� �������: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // ZNACENIE 
// ����� ��������� ������� �� ����� � ������ �������
#ifdef PORADOK 
	cout << "�������� ������� � ������ �������:" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
#endif // PORADOK 
// ���������� ����� ��������� �������
#ifdef SUMMA 
	for (int i = 0; i < SIZE; ++i)
	{
		sum += arr[i];
		cout << "����� ��������� �������: " << sum << endl;
#endif // SUMMA 

}