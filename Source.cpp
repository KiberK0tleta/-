#include<iostream>
#include<Windows.h>
using namespace std;

const int ROWS = 8;
const int COLS = 5;
#define Linia "-----------------------------------";

void FillRand(int arr[], const int n /*int minRand = 0, int maxRand = 100*/);
void FillRand(double brr[], const int n );
void FillRand(float crr[], const int n );
void FillRand(char drr[], const int n );

void FillRand(int arr2[ROWS][COLS], const int m, const int n);
void FillRand(double brr2[ROWS][COLS], const int m, const int n);
void FillRand(float crr2[ROWS][COLS], const int m, const int n);
void FillRand(char drr2[ROWS][COLS], const int m, const int n);


void Print(int arr[], const int n);
void Print(double brr[], const int n);
void Print(float crr[], const int n);
void Print(char drr[], const int n);

void Print(int arr2[ROWS][COLS], const int m, const int n);
void Print(double brr2[ROWS][COLS], const int m, const int n);
void Print(float crr2[ROWS][COLS], const int m, const int n);
void Print(char drr2[ROWS][COLS], const int m, const int n);


int Sum(int arr[], const int n);
double Sum(double brr[], const int n);
float Sum(float crr[], const int n);
char Sum(char drr[], const int n);


int Avg(int arr[], const int n);
double Avg(double brr[], const int n);
float Avg(float crr[], const int n);
char Avg(char drr[], const int n);


int minValueIn(int arr[], const int n);
double minValueIn(double brr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double brr[], const int n);
float maxValueIn(float crr[], const int n);
char maxValueIn(char drr[], const int n);

void Sort(int arr[], const int n);
void Sort(double brr[], const int n);
void Sort(float crr[], const int n);
void Sort(char drr[], const int n);

void Sort(int arr2[ROWS][COLS], const int m, const int n);
void Sort(double brr2[ROWS][COLS], const int m, const int n);
void Sort(float crr2[ROWS][COLS], const int m, const int n);
void Sort(char drr2[ROWS][COLS], const int m, const int n);


void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	//const int m = 5;
	cout << "Одномерный массив типа int: \n";
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сортировка массива:" << endl;
	Sort(arr, n); 
	cout << "Сложение: "  << Sum(arr, n) << endl;
	cout << "Среднее арифметическое массива:" << Avg(arr, n) << endl;
	cout << "Минимальное число в массиве:" << minValueIn(arr, n) << endl;
	cout << "Максмальное число в массиве:" << maxValueIn(arr, n) << endl;
	cout << "Двемерный массив типа int:" << endl;
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сортировка двумерного массива:" << endl;
	Sort(arr2, ROWS, COLS);
	cout << Linia;
	cout<< endl;


	cout << "Одномерный массив типа double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сортировка массива:" << endl;
	Sort(brr, n); 
	cout << "Сложение: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое массива: " << Avg(brr, n) << endl;
	cout << "Минимальное число в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максмальное число в массиве : " << maxValueIn(brr, n) << endl;
	cout << "Двемерный массив типа double:" << endl;
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сортировка двумерного массива:" << endl;
	Sort(brr2, ROWS, COLS);
	cout << Linia;
	cout << endl;


	cout << "Одномерный массив типа float: \n";
	float crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "Сортировка массива:" << endl;
	Sort(crr, n); 
	cout << "Сложение: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое массива:" << Avg(crr, n) << endl;
	cout << "Минимальное число в массиве:" << minValueIn(crr, n) << endl;
	cout << "Максмальное число в массиве:" << maxValueIn(crr, n) << endl;
	cout << "Двемерный массив типа float:" << endl;
	float crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "Сортировка двумерного массива:" << endl;
	Sort(crr2, ROWS, COLS);
	cout << Linia;
	cout << endl;


	cout << "Одномерный массив типа char: \n";
	setlocale(LC_ALL, "C");
	char drr[n];
	FillRand(drr, n);
	Print(drr, n);
	setlocale(LC_ALL, "Rus");
	cout << "Сортировка массива:" << endl;
	Sort(drr, n); 
	cout << "Сложение: " << Sum(drr, n) << endl;
	cout << "Среднее арифметическое массива:" << Avg(drr, n) << endl;
	cout << "Минимальное число в массиве:" << minValueIn(drr, n) << endl;
	cout << "Максмальное число в массиве:" << maxValueIn(drr, n) << endl;
	cout << "Двемерный массив типа char:" << endl;
	char drr2[ROWS][COLS];
	FillRand(drr2, ROWS, COLS);
	Print(drr2, ROWS, COLS);
	cout << "Сортировка двумерного массива:" << endl;
	Sort(drr2, ROWS, COLS);
	cout << Linia;
	cout << endl;
    





	
}


//Ввод
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void FillRand(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		brr[i] = rand() % 10;
	}
}
void FillRand(float crr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		crr[i] = rand() % 10;
	}
}
void FillRand(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		drr[i] = rand();
	}
}
void FillRand(int arr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr2[i][j] = rand() % 100;
		}
	}
}
void FillRand(double brr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			brr2[i][j] = double(rand() % 10000) / 100;
		}
	}
}
void FillRand(float crr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			crr2[i][j] = rand() % 100;
		}
	}
}
void FillRand(char drr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			drr2[i][j] = rand();
		}
	}
}
//------------------------------------------------//
//Вывод
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double brr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
void Print(float crr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << crr[i] << "\t";
	}
	cout << endl;
}
void Print(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << drr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<arr2[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double brr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << brr2[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float crr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << crr2[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char drr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << drr2[i][j] << "\t";
		}
		cout << endl;
	}
}
//------------------------------------------------//
//Сумма
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double brr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += brr[i];
	}
	return sum;
}
float Sum(float crr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += crr[i];
	}
	return sum;
}
char Sum(char drr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += drr[i];
	}
	return sum;
}

//------------------------------------------------//
//Среднее арифметическое 
int Avg(int arr[], const int n)
{
	int Avg;
	Avg = Sum(arr, n) / n;
	return Avg;
}
double Avg(double brr[], const int n)
{
	double Avg;
	Avg = (double)Sum(brr, n) / n;
	return Avg;
}
float Avg(float crr[], const int n)
{
	float Avg;
	Avg = (float)Sum(crr, n) / n;
	return Avg;
}
char Avg(char drr[], const int n)
{
	char Avg;
	Avg = (char)Sum(drr, n) / n;
	return Avg;
}
//------------------------------------------------//
//Мин значение
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double brr[], const int n)
{
	double min = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (brr[i] < min)min = brr[i];
	}
	return min;
}
float minValueIn(float crr[], const int n)
{
	float min = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] < min)min = crr[i];
	}
	return min;
}
char minValueIn(char drr[], const int n)
{
	char min = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] < min)min = drr[i];
	}
	return min;
}
//------------------------------------------------//
//Макс значение
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double brr[], const int n)
{
	double max = brr[0];
	for (int i = 0; i < n; i++)
	{
		if (brr[i] > max)max = brr[i];
	}
	return max;
}
float maxValueIn(float crr[], const int n)
{
	float max = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] > max)max = crr[i];
	}
	return max;
}
char maxValueIn(char drr[], const int n)
{
	char max = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] > max)max = drr[i];
	}
	return max;
}
//------------------------------------------------//
//Сортировка
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				int Buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = Buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(double brr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (brr[j] > brr[i])
			{
				int Buffer = brr[i];
				brr[i] = brr[j];
				brr[j] = Buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << "\t";
	}
	cout << endl;
}
void Sort(float crr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (crr[j] > crr[i])
			{
				int Buffer = crr[i];
				crr[i] = crr[j];
				crr[j] = Buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << crr[i] << "\t";
	}
	cout << endl;
}
void Sort(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (drr[j] > drr[i])
			{
				int Buffer = drr[i];
				drr[i] = drr[j];
				drr[j] = Buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << drr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					if (arr[i][j] < arr[k][l])
					{
						int Buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = Buffer;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Sort(double brr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					if (brr2[i][j] < brr2[k][l])
					{
						int Buffer = brr2[i][j];
						brr2[i][j] = brr2[k][l];
						brr2[k][l] = Buffer;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << brr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Sort(float crr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					if (crr2[i][j] < crr2[k][l])
					{
						int Buffer = crr2[i][j];
						crr2[i][j] = crr2[k][l];
						crr2[k][l] = Buffer;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << crr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Sort(char drr2[ROWS][COLS], const int m, const int n)
{
	
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < m; k++)
				{
					for (int l = k == i ? j + 1 : 0; l < n; l++)
					{
						if (drr2[i][j] < drr2[k][l])
						{
							int Buffer = drr2[i][j];
							drr2[i][j] = drr2[k][l];
							drr2[k][l] = Buffer;
						}
					}
				}
			}
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << drr2[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
}
	
