#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Print(T arr[], const int n);

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
float AVG(float arr[], const int n);
char AVG(char arr[], const int n);

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int lengthShift);
void shiftLeft(double arr[], const int n, int lengthShift);
void shiftLeft(float arr[], const int n, int lengthShift);
void shiftLeft(char arr[], const int n, int lengthShift);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift);

void shiftRight(int arr[], const int n, int lengthShift);
void shiftRight(double arr[], const int n, int lengthShift);
void shiftRight(float arr[], const int n, int lengthShift);
void shiftRight(char arr[], const int n, int lengthShift);

template <typename T>
void Output(T arr[], const int n, int lengthShift) {
	FillRand(arr, n);
	cout << "\tМассив:                   "; Print(arr, n);
	Sort(arr, n);
	cout << "\tСортировка масива:        "; Print(arr, n);
	shiftLeft(arr, n, lengthShift);
	cout << "\tСдвиг массива в лево:     "; Print(arr, n);
	shiftRight(arr, n, lengthShift);
	cout << "\tСдвиг массива в право:    "; Print(arr, n);
	cout << "\tСумма всех чисел в масcиве: " << Sum(arr, n) << endl;
	cout << "\tСреднее арифметическое значение чисел в массиве: " << AVG(arr, n) << endl;
	cout << "\tМинимальное число в массиве: " << minValueIn(arr, n) << endl;
	cout << "\tМаксимальное число в массиве: " << maxValueIn(arr, n) << endl;
}
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int lengthShift = 0;
	cin >> lengthShift;
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив int" << endl
		<< "________________________________________________________________________" << endl;
	int arr[n];
	Output(arr, n, lengthShift);
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив double" << endl
		<< "________________________________________________________________________" << endl;
	double arr_double[n];
	Output(arr_double, n, lengthShift);
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив float" << endl
		<< "________________________________________________________________________" << endl;
	float arr_float[n];
	Output(arr_float, n, lengthShift);
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Одномерный масcив char" << endl
		<< "________________________________________________________________________" << endl;
	char arr_char[n];
	Output(arr_char, n, lengthShift);
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Двумерный масcив int" << endl
		<< "________________________________________________________________________" << endl;
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "Двумерный масcив double" << endl
		<< "________________________________________________________________________" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое значение двумерного массива: " << AVG(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в масиве " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в масиве " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, lengthShift);
	cout << "Сдвиг масива в лево" << endl;
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

int minValueIn(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n) {
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n) {
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
char minValueIn(char arr[], const int n) {
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n) {
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n) {
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char maxValueIn(char arr[], const int n) {
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}

double AVG(int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double AVG(double arr[], const int n) {
	return Sum(arr, n) / n;
}
float AVG(float arr[], const int n) {
	return Sum(arr, n) / n;
}
char AVG(char arr[], const int n) {
	return Sum(arr, n) / n;
}

double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS + COLS);
}

int Sum(int arr[], const int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n) {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n) {
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n) {
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) {
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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 10;
	}
}
void FillRand(char arr[], const int n) {
	for (int i = 0; i < n; i++)
	{
		arr[i] = (char)rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;

		}
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}
void Sort(char arr[], const int n) {
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
				if (arr[j] < arr[i])
				{
					char buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = j + 1; k < COLS; k++)
			{
				if (arr[i][k] < arr[i][j]) {
					int buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
}

void shiftLeft(int arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		int save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}
void shiftLeft(double arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		double save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}
void shiftLeft(float arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		float save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}
void shiftLeft(char arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		char save = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[(i + 1)];
		}
		arr[(n - 1)] = save;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int lengthShift) {
	{
		int save = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < ROWS; j++)
			{
				save = arr[j][COLS - 1];
				for (int k = (COLS - 1); k >= 0; k--)
				{
					arr[j][k] = arr[j][k - 1];
				}
				arr[j][0] = save;
			}
		}

	}
}

void shiftRight(int arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		int save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(double arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		double save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(float arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		float save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}
void shiftRight(char arr[], const int n, int lengthShift) {
	for (int i = 0; i < lengthShift; i++)
	{
		char save = 0;
		save = arr[(n - 1)];
		for (int i = (n - 1); i > 0; i--)
		{
			arr[i] = arr[(i - 1)];
		}
		arr[0] = save;
	}
}