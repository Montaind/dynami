#include <iostream> 
#include "Matrix.h"

int main () {
	int n, m;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Enter m: ";
	std::cin >> m;
	Matrix* A = new Matrix(n, m);
	A->Display();
}