﻿#include <iostream>
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
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);
char AVG(char arr[], const int n);
double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, const int lengthShift);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int lengthShift);

void main()
{
	setlocale(LC_ALL, "");
	const int lengthShift = 5;
	const int n = 5;
	int arr[n];

	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "1 Масcив" << endl
		<< "________________________________________________________________________" << endl;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма масcива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение: " << AVG(arr, n) << endl;
	cout << "Минимальное значение в масиве " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в масиве " << maxValueIn(arr, n) << endl;
	shiftLeft(arr, n, lengthShift);
	cout << "Сдвиг масива в лево: " << endl;
	Print(arr, n);
	
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "2 Масcив" << endl
		<< "________________________________________________________________________" << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма масcива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое значение: " << AVG(brr, SIZE) << endl;
	cout << "Минимальное значение в масиве " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в масиве " << maxValueIn(brr, SIZE) << endl;


	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "3 Масcив" << endl
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
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "4 Масcив" << endl
		<< "________________________________________________________________________" << endl;
	const int num= 8;
	char arr_char[num];
	FillRand(arr_char, num);
	Print(arr_char, num);
	cout << "Сумма масcива: " <<Sum(arr_char, num)<<endl;
	cout << "Среднее арифметическое значение: " << AVG(arr_char, num) << endl;
	cout << "Минимальное значение в масиве " << minValueIn(arr_char, num) << endl;
	cout << "Максимальное значение в масиве: " << maxValueIn(arr_char,num) << endl;
	Sort(arr_char, num);
	Print(arr_char, num);
	cout << "________________________________________________________________________" << endl
		<< "\t\t" << "5 Масcив" << endl
		<< "________________________________________________________________________" << endl;
	float arr_float[n];
	FillRand(arr_float, n);
	Print(arr_float, n);
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
double AVG(double arr[], const int n){
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
void Print( T arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Sort(char arr[], const int n) {
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j <n; j++)
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

void shiftLeft(int arr[], const int n, const int lengthShift) {
	int save = 0;
	for (int i = 0; i < lengthShift; i++)
	{
		save = arr[n - 1];
		for (int j = (n - 1); j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = save;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int lengthShift) {
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