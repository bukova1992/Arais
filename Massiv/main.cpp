#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------------------------------\n"


const int ROWS = 3; // количество строк
const int COLS = 4; // количество элементов строки
template<typename T>
T FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
template<typename T>
T FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);
template<typename T>
T FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
template<typename T>
T Print(const T arr[], const int n);
template<typename T>
T Print(const T arr[], const int n);
template<typename T>
T Print(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Sum(const T arr[], const int n);
template<typename T>
T Sum(const T arr[], const int n);
template<typename T>
T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Avg(const T arr[], const int n);
template<typename T>
T minValueIn(const T arr[], const int n);
template<typename T>
T minValueIn(const T arr[], const int n);
template<typename T>
T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T maxValueIn(const T arr[], const int n);
template<typename T>
T maxValueIn(const T arr[], const int n);
template<typename T>
T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T shiftLeft(T arr[], const int n, int c);
template<typename T>
T shiftLeft(double arr[], const int n, int c);
template<typename T>
T shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int c);

template<typename T>
T shiftRight(T arr[], const int n, int c);
template<typename T>
T shiftRight(T arr[], const int n, int c);
template<typename T>
T Sort(T arr[], const int n);
template<typename T>
T Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T Unique(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int i_arr[n];

	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать: " << endl;
	} while (minRand == maxRand);*/

	FillRand(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма элементов массива: " << Sum(i_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr, n) << endl;
	int c = 0;
	shiftLeft(i_arr, n, c);
	shiftRight(i_arr, n, c);
	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr, n) << endl;
	int d = 0;
	shiftLeft(d_arr, n, d);
	shiftRight(d_arr, n, d);
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Unique(i_arr_2, ROWS, COLS);
	cout << "Ввести случайное значение массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	T Unique(T arr[ROWS][COLS], const int ROWS, const int COLS);
}
template<typename T>
T FillRand(T arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		T buffer = minRand;
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
template<typename T>
T FillRand(T arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		T buffer = minRand;
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
template<typename T>
T FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// заполнение двумерного массива случайными числами
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>

T Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
T Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
T Print(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	// вывод двумерного массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;

		}
		cout << endl;
	}
}
template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>

T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];

		}
	}
	return sum;
}
template<typename T>

T Avg(const T arr[], const int n)
{
	return (T)Sum(arr, n) / n;
}
template<typename T>
T minValueIn(const T arr[], const int n)
{
	T minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}
template<typename T>
T minValueIn(const T arr[], const int n)
{
	T minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];

	}
	return minValue;
}
template<typename T>
T maxValueIn(const T arr[], const int n)
{
	T maxValue;
	maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;

}
template<typename T>
T maxValueIn(const T arr[], const int n)
{
	T maxValue;
	maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;

}
template<typename T>
T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValue;
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
template<typename T>
T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxValue;
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
template<typename T>
T shiftLeft(T arr[], const int n, int c)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
template<typename T>
T shiftLeft(T arr[], const int n, int d)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
template<typename T>
 T shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int k = 0; k < COLS; k++)
		{

		}
	}
}
 template<typename T>
T shiftRight(T arr[], const int n, int c)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
template<typename T>
T shiftRight(T arr[], const int n, int d)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
template<typename T>
T Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++) //счётчик массива выбирает элемент массива 
	{
		int buffer = arr[i];
		for (int j = i + 1; j < n; j++) //счётчик массива перебивает оставшиеся элементы оставшиеся элементы массива 
		{
			//arr[i] //выбранный элемент 
			//arr[j] //перебираемый элемент 
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>

T Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < ROWS; k++)
			{
				//arr[i][j]-выбранный элемент
				//arr[i][k]-перебираемый элемент
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
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
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
	template<typename T>
	T Unique(T arr[ROWS][COLS], const int ROWS, const int COLS)

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
	template<typename T>
	T Search(T arr[], const int n)
	{
	cout<< "Повторяющиеся элементы:";
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
	cout << "\n Количество повторений:" << count << endl; 
}

