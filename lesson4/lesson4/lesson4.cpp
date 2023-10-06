#include <iostream>
#include <cmath>

int main()
{
	//21
	/*
	int a, b, c;
	std::cout << "enter a, b, c";
	std::cin >> a >> b >> c;

	if (a > b && a > c) {
		std::cout << std::endl << "max is " << a;
	}
	else if (b > a && b > c) {
		std::cout << std::endl << "max is " << b;
	}
	else {
		std::cout << std::endl << "max is " << c;
	}
	*////////////////////////////////////////////////////////////////////
	// 22
	//int a, b, c;
	//std::cout << "enter a, b, c";
	//std::cin >> a >> b >> c;

	//if (a < b && a < c) {
	//	std::cout << std::endl << "max is" << a;

	//}
	//else if (b < a && b < c) {
	//	std::cout << std::endl << "max is" << b;
	//}
	//else {
	//	std::cout << std::endl << "max is " << c;
	//}
	//////////////////////////////////////////////////////////////////////////
	/*
	//23
	int a, b, c;
	std::cout << "enter a, b, c ";
	std::cin >> a >> b >> c;

	if (a == 1 || b == 1 || c == 1) {
		std::cout << std::endl <<true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////
	/*
	//24
	int a, b, c;
	std::cout << "enter a, b, c ";
	std::cin >> a >> b >> c;

	if (a + b == 4 || a + c == 4 || b + c == 4) {
		std::cout << std::endl << true;
	}
	else{
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////////////////////
	//25
	int a, b, c, y;

	std::cout << "enter a, b, c ";
	std::cin >> a >> b >> c;

	if (a + b < c || a + c < b || b + c < a) {
		y = 1;
	}
	else {
		y = 2;
	}

}