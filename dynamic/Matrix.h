#pragma once
#include <iostream>

class Matrix {
public:
	Matrix(double n, double m);
	Matrix();
	Matrix(Matrix& m);
	~Matrix();
	void Display();
	void Multiply(double n);
private:
	void randome(int n, int m);
	void constr(int n, int m);
	void destr(int n, int m);
private:
	double** A;
	int n_;
	int m_;
};
