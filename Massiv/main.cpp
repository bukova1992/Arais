#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------------------------------\n"


const int ROWS = 3; // ���������� �����
const int COLS = 4; // ���������� ��������� ������

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
int Sum(const double arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);

int minValueIn(const int arr[], const int n);
double minValueIn(const double arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
double maxValueIn(const double arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int c);
void shiftLeft(double arr[], const int n, int c);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int c);


void shiftRight(int arr[], const int n, int c);
void shiftRight(double arr[], const int n, int c);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int i_arr[n];

	/*int minRand, maxRand;
	do
	{
		cout << "������� ���������� ��������� ��������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� ��������� �����: "; cin >> maxRand;
		if (minRand == maxRand)cout << "������� ��������� �� ������ ���������: " << endl;
	} while (minRand == maxRand);*/

	FillRand(i_arr, n);
	Print(i_arr, n);
	cout << "����� ��������� �������: " << Sum(i_arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(i_arr, n) << endl;
	cout << "����������� �������� �������: " << minValueIn(i_arr, n) << endl;
	cout << "������������ �������� �������: " << maxValueIn(i_arr, n) << endl;
	int c = 0;
	shiftLeft(i_arr, n, c);
	shiftRight(i_arr, n, c);
	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "����������� �������� �������: " << minValueIn(d_arr, n) << endl;
	cout << "������������ �������� �������: " << maxValueIn(d_arr, n) << endl;
	int d = 0;
	shiftLeft(d_arr, n, d);
	shiftRight(d_arr, n, d);
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� �������: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Unique(i_arr_2, ROWS, COLS);
	cout << "������ ��������� �������� �������: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// ���������� ���������� ������� ���������� �������
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	// ����� ���������� ������� �� �����
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;

		}
		cout << endl;
	}
}
int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];

		}
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
	int minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}
double minValueIn(const double arr[], const int n)
{
	double minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];

	}
	return minValue;
}
int maxValueIn(const int arr[], const int n)
{
	int maxValue;
	maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;

}
double maxValueIn(const double arr[], const int n)
{
	double maxValue;
	maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;

}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue;
	minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];

		}
	}
	return minValue;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue;
	maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue)maxValue = arr[i][j];

		}
	}
	return maxValue;
}
void shiftLeft(int arr[], const int n, int c)
{
	cout << "�� ������� ��������� �������� ������: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
void shiftLeft(double arr[], const int n, int d)
{
	cout << "�� ������� ��������� �������� ������: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < COLS; k++)
		{

		}
	}
}
void shiftRight(int arr[], const int n, int c)
{
	cout << "�� ������� ��������� �������� ������: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
void shiftRight(double arr[], const int n, int d)
{
	cout << "�� ������� ��������� �������� ������: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //������� ������� �������� ������� ������� 
	{
		int buffer = arr[i];
		for (int j = i + 1; j < n; j++) //������� ������� ���������� ���������� �������� ���������� �������� ������� 
		{
			//arr[i] //��������� ������� 
			//arr[j] //������������ ������� 
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < ROWS; k++)
			{
				//arr[i][j]-��������� �������
				//arr[i][k]-������������ �������
				if (arr[i][k] < arr[i][j])
				{
					int buffer = arr[i][k];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
			for (int k = i; k < ROWS; k++)
			{
				for (int l = j + 1; l < COLS; l++)
				{
					//arr[i][j] - ��������� �������
					//arr[k][l] - ������������ �������
					if (arr[i][j] < arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void Search(int arr[], const int n)
{
	cout << "������������� ��������:";
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != i && arr[j] == arr[i])
			{
				cout << arr[i] << tab;
				count++;
			}
		}
	}
	cout << "\n ���������� ����������:" << count << endl;
}

