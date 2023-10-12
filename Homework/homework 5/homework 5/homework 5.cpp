#include <iostream>

int main()
{
	//1
	/*
	int num = 0;
	std::cout << "enter the number ";
	std::cin >> num;

	if (num > 0) {
		std::cout << std::endl <<true;
	}
	else {
		std::cout << std::endl << false;
	}
	*////////////////////////////////////////////////////////////////////
	//2
	/*
	int num = 0;
	std::cout << "enter the number ";
	std::cin >> num;

	if (num % 2 != 0) {
		std::cout << std::endl <<true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////
	//3
	/*
	int num = 0;
	std::cout << "enter the number ";
	std::cin >> num;

	if (num % 2 == 0) {
		std::cout << std::endl <<true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////
	//4
	/*
	int num1 = 0, num2 = 0;
	std::cout << "enter the 2 nums ";
	std::cin >> num1 >> num2;

	if (num1 > 2 && num2 <= 3) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////
	//5
	/*
	int num1 = 0, num2 = 0;
	std::cout << "enter the 2 nums ";
	std::cin >> num1 >> num2;

	if (num1 >= 0 && num2 < -2) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////////////
	//6
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a < b && b < c) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////
	//7
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a > b && b > c) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////
	//8
	/*
	int a, b;
	std::cout << "enter the 2 nums ";
	std::cin >> a >> b;

	if (a % 2 != 0 && b % 2 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////////////////
	//9
	/*
	int a, b;
	std::cout << "enter the 2 nums ";
	std::cin >> a >> b;

	if (a % 2 != 0 || b % 2 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////////
	//10
	/*
	int a, b;
	std::cout << "enter the 2 nums ";
	std::cin >> a >> b;

	if (a % 2 != 0 || b % 2 == 0) {
		std::cout << std::endl << true;
	}
	else if(a % 2 == 0 || b % 2 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*////////////////////////////////////////////////////////////////////////////////////////
	//11
	/*
	int a, b;
	std::cout << "enter the 2 nums ";
	std::cin >> a >> b;

	if (a % 2 == 0 || b % 2 == 0) {
		std::cout << std::endl << true;
	}
	else if(a % 2 != 0 || b % 2 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////////////////////////
	//12
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a > 0 && b > 0 && c > 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////////////
	//13
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a > 0 || b > 0 || c > 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////////////////////////
	//14
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a > 0 && b < 0 && c < 0) {
		std::cout << std::endl << true;
	}
	else if(a < 0 && b > 0 && c < 0) {
		std::cout << std::endl << true;
	}
	else if (a < 0 && b < 0 && c > 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*////////////////////////////////////////////////////
	//15
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a > 0 && b > 0 && c < 0) {
		std::cout << std::endl << true;
	}
	else if(a < 0 && b > 0 && c > 0) {
		std::cout << std::endl << true;
	}
	else if (a > 0 && b < 0 && c > 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*///////////////////////////////////////////////////////////////////////
	//16
	/*
	int num = 0;
	std::cout << "enter the number ";
	std::cin >> num;

	if (num % 2 == 0 && num / 10 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*//////////////////////////////////////////////////////////////////////////////////
	//17
	/*
	int num = 0;
	std::cout << "enter the number ";
	std::cin >> num;

	if (num % 2 != 0 && num / 100 != 0) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*////////////////////////////////////////////////////////////////////////////////////
	//18
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a == b || b == c || a == c) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*/////////////////////////////////////////////////////////////////////////////////////////
	//19
	/*
	int a, b, c;
	std::cout << "enter the 3 nums ";
	std::cin >> a >> b >> c;

	if (a == b * -1 || b == c * -1 || a == c * -1) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*/
	//20
	/*
	int a;
	std::cout << "enter the number ";
	std::cin >> a;

	if (a % 10 != a % 100 / 10 && a / 100 != a % 10 && a % 100 / 10 != a / 100) {
		std::cout << std::endl << true;
	}
	else {
		std::cout << std::endl << false;
	}
	*/
	//21
}