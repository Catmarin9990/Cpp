#include <iostream>
#include <cmath>

int main()
{
	/*
	int x = 0;
	double y = 0;
	std::cout << "enter the number " << std::endl;
	std::cin >> x;

	y = pow(x, 2) + sin(2 * x) + 3;

	std::cout << "y = " << y;
	*/

	//int a, x;
	//double y; 
	//std::cin >> x >> a;
	//int k = x + a;
	//y = abs(pow(k, 3)) / log10(abs(k)) + 7 * sqrt(k);
	//std::cout << y;

	int a = 5, b = 6;

	a += b;
	b -= a;
	a += b;
	b -= b + b;

	std::cout << a << std::endl << b;	
}
