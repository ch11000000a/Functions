#include<iostream>
using namespace std;
int Sum(int a=0, int b=0);// прототип функции function declaration 
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	char z;
	cout << "Введите значения: ";
	cin >> a>>z>> b;
	int c = Sum(a, b);// Вызов функции Function 
	// too few arguments in function call
	// too many arguments in function call
	//Function dosn't take N arguments
	if (z == '+') {
		cout << "\n Сумма: " << Sum(a, b);
	}if (z == '-') {
		cout << "\n Разница: " << Difference(a, b);
	}if (z == '*') {
		cout << "\n Умножение: " << Product(a, b);
	}if (z == '/') {
		cout << "\n Деление: " << Quotient(a, b);
	}
}
int Sum(int a,int b) // Реализация функции определение функции function definition 
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