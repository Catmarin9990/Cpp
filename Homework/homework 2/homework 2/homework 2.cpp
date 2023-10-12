#include <iostream>
#include <cmath>

int main()
{
	// 9
	/*
	int x, y;
	double z, s;
	std::cout << "enter x, y";
	std::cin >> x >> y;

	z = pow((x + 4) / pow(pow(y, 2) + 4, 3), 1.0 / 5);

	s = sin(pow(x + z, 2)) + (3 * z) + y / pow(x, 2);

	std::cout << std::endl << "answer is " << s;
	*/////////////////////////////////////////////////////////////////////////


	//10
	/*
	int x, y;
	double s = 0, z;

	std::cout << "enter x, y";
	std::cin >> x >> y;

	z = pow(sin(cos(x + y) + 1), 2);
	s = sin(3.14 / 12 + x) * cos((y + z) / (3.14 + pow(z, 2))) + exp(z + 4);

	std::cout << std::endl << "answer is " << s;
	*///////////////////////////////////////////////////////////////////////////////
	//11
	/*
	int a, x, b, t;
	double y;

	std::cout << "enter a, b, x";
	std::cin >> a >> b >> x;

	t = pow(a, 2) + pow(b, 2);

	if (t > 5) {
		y = 3 * exp(a - x) + (log2(t + 5) / log2(3));
	}
	else if (t < 1) {
		y = pow(tan(a + b), 4);
	}
	else {
		y = -3;
	}
	std::cout << std::endl << "answer is " << y;
	*//////////////////////////////////////////////////////////////////

	//13
	/*
	int x, a, b, t;
	double y;
	std::cout << "enter a, b, x";
	std::cin >> a >> b >> x;

	t = a + abs(b);

	if (t < -5) {
		y = exp(abs(a + x)) * pow(cos(a + x + b), 2);
	}
	else if (t > 2) {
		y = atan(a + x);
		y = (3.14 / 2) - y;
		y = pow(y, 1.0 / 3);
	}
	else {
		y = t;
	}

	std::cout << std::endl << "answer is " << y;
	*///////////////////////////////////////////////////////////////////////////

	// 14
	/*
	int a, b;
	double y;
	std::cout << "enter a, b";
	std::cin >> a >> b;

	if (a + b < 3) {
		y = atan(a + b);
		y = (3.14 / 2) - y;
		y = pow(y * 180 / 3.14, 4);
	}
	else if (a + b > 5) {
		y = pow(log2(a + b) / log2(8), 2);
	}
	else {
		y = pow(a, 15);
	}

	std::cout << std::endl << "answer is " << y;
	*//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//15

	/*
	int a, b, c, x;
	double y;

	std::cout << "enter a, b, c, x";
	std::cin >> a >> b >> c >> x;

	if (-1 < c && c < 1) {
		y = b + pow(tan(c + a), 5);
	}
	else if (c <= -1) {
		y = cos(pow(log10(abs(x)), 2)) + pow(x, 8);
	}
	else {
		y = pow(a, -10);
	}

	std::cout << std::endl << "answer is " << y;
	*///////////////////////////////////////////////////////////////////

	//16
	
	/*
	int x, a;
	double y;

	std::cout << "enter a, x";
	std::cin >> a >> x;

	if (abs(a) < 3) {
		y = pow(sin(abs(x + a)) + pow(cos(pow(x, 2)), 2), 2);
	}
	else {
		y = pow(pow(a, 2) + pow(x, 2), 1.0 / 4) * (log2(pow(a, 2) + pow(x, 4) / log2(2)));
	}

	std::cout << std::endl << "answer is " << y;
	*/////////////////////////////////////////////////////////////////////////

	//17
	/*
	int a, z;
	double y = 0;
	std::cout << "enter a, z";
	std::cin >> a >> z;

	if (abs(a) > 3) {
		y = pow(log2(4 + pow(a, 2)) / log2(2), 5) + tan(z + a);
	}
	else {
		y = pow(pow(z, 4) + 4 * a, 5);
	}

	std::cout << std::endl << "answer is " << y;
	*/

	//18
	/*
	int x, z;
	double y;

	std::cout << "enter x, z";
	std::cin >> x >> z;

	if (1 <= x && x <= 7) {
		y = pow(abs(x) + 2 * abs(z), 1.0 / 4) + exp(abs(x + 1));
	}
	else {
		y = pow(pow(tan(x + z), 7), 2);
	}

	std::cout << std::endl << "answer is " << y;
	*//////////////////////////////////////////////////////
	
	//20
	
	
	int x, a, b;
	double y = 0;

	std::cout << "enter x, a, b";
	std::cin >> x >> a >> b;

	if (a < 3) {
		y = exp(cos(x + a + b)) * tan(a + pow(b, 2));
	}
	else {
		y = log2(4 + pow(a, 2) + pow(b, 2)) / log2(3);
	}
	std::cout << std::endl << "answer is " << y;
	//////////////////////////////////////////////

}