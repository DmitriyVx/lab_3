import Math;
#include<math.h>
#include<Windows.h>
#include<iostream>
using namespace Math;
double e = 2.71828;
Complex f(const Complex& z)
{
	Complex rezult;
	Complex a = 1.0i;
	return rezult = a + z * (exp(double(1 + z)) - exp(double(-(1 + z)))) / 2;
}
Rational f(const Rational& r)
{
	Rational rezult;
	Rational a = (1, 2);
	rezult = a + r * (exp(double(1 + r)) - exp(double(- (1 + r)))) / 2;
	return rezult;
}
double f(double x)
{
	double rezult;
	rezult = 0.5 + x * (exp(1 + x)-exp(-(1+x)))/2;
	return rezult;
}
void main()
{
	setlocale(LC_ALL, "rus");
	int m, s;
	double a, b, x;
	std::cout << "������� �������� ����� ������������ ����� ";
	std::cin >> a;
	std::cout << "������� ������ ����� ������������ ����� ";
	std::cin >> b;
	std::cout << "������� ��������� ����� ";
	std::cin >> s;
	std::cout << "������� ����������� ";
	std::cin >> m;
	std::cout << "������� ������������ ����� ";
	std::cin >> x;
	Complex z = Complex(a, b);
	Rational r = Rational(s, m);
	std::cout << "��������� � ����������� ������: " << f(z) << std::endl;
	std::cout << "��������� � ������������ ������: " << f(r) << std::endl;
	std::cout << "��������� � ������������ ������: " << f(x) << std::endl;
}

