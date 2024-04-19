#include<iostream>
using namespace std;
#define VAR_3
void main()
{
	for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;
	setlocale(LC_ALL, "");
	int decimal; //десятичное число 
	cout << "Введите десятичное число:"; cin >> decimal;
	const int n = 8; 
	char hex[n] = {};
	int i = 0;
#ifdef VAR_3
	for (; decimal; hex[i++] = decimal % 16, decimal /= 16);
	for (; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
	}
	for (; decimal; hex[i++] = decimal & 15, decimal >>=4);
#endif // VAR_3
	for (; decimal; hex[i++] = decimal % 16, decimal /= 16);
   for (--i; i >= 0; i--)
   {
	   cout << char(hex[i] < 10 ? hex[i] + '0' : hex[i] + 'A' - 10);
   }
   cout << endl;
}
