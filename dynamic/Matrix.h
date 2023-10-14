#pragma once
#include <iostream>

class Matrix {
public:
	Matrix(double n, double m);
	Matrix();
	~Matrix();
private:
	void constr(int n, int m);
	void destr(int n, int m);
	void randome(int n, int m);
private:
	double** A;
	int n_;
	int m_;
};
