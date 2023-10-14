#include "Matrix.h"

void Matrix::constr(int n, int m) {
	A = new double*[n];
	for (int i = 0; i < n; i++) {
		A[i] = new double[m];
	}
}

Matrix::Matrix(double n, double m) : n_(n), m_(m) {
	constr(n, m);
	randome(n, m);
}

Matrix::Matrix() : n_(0), m_(0){
	constr(0, 0);
}
void Matrix::destr(int n, int m) {
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;
}
Matrix::~Matrix() {
	destr(n_, m_);
}

void Matrix::randome(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 101;
		}
	}
}

void Matrix::Display() {
	for (int i = 0; i < n_; i++) {
		for (int j = 0; j < m_; j++) {
			std::cout << A[i][j] << "\t";
		}
		std::cout << "\n";
	}
}
