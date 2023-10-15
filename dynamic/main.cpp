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
	std::cout << "\n\n\n";
	Matrix& B = *new Matrix(n, m);
	A->Multiply(10);
	B.Display();
}