#pragma once
ref class ProjectClass
{
	double a, b;
public:
	ProjectClass() { a = 1; b = 1; }
	void Fn_b(double x, double y, double z); 
	void Fn_a(double x, double y, double z); 
	double geta() { return a; }
	double getb() { return b; }
	void Fn_res(double y, double z);
};

