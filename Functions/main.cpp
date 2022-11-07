#include<iostream>
using namespace std;
int Sum(int a = 0, int b = 0);// прототип функции function declaration 
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);
int Power(int a, int b) {
	int save=1;
		for (int i = 1; i <= b; i++)
		{
			save *= a;
		}
	return save;
}
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите значения: ";
	cin >> a >> b;
	int c = Sum(a, b);// Вызов функции Function 
	// too few arguments in function call
	// too many arguments in function call
	//Function dosn't take N arguments
	cout << "\n Сумма: " << a << "+" << b << " = " << Sum(a, b);
	cout << "\n Разница: " << a << "-" << b << " = " << Difference(a, b);
	cout << "\n Умножение: " << a << "*" << b << " = " << Product(a, b);
	cout << "\n Деление: " << a << "/" << b << " = " << Quotient(a, b);
	cout << "\n Возведение в степень " << a << "^" << b << " = " << Power(a,b);
}
int Sum(int a, int b) // Реализация функции определение функции function definition 
{
	int sum = a + b;
	return sum;
}
int Difference(int a, int b) {
	return a - b;
}
int Product(int a, int b) {
	return a * b;
}
double Quotient(int a, int b) {
	return (double)a / b;
}