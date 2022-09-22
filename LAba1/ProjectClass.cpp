#include "ProjectClass.h"
#include "Math.h"
#include <iostream>
using namespace std;
void ProjectClass::Fn_b(double x, double y, double z)
{
	double b1 = 1+pow(fabs(y-x),2)/pow(fabs(z-1),1.34);
	double b2 = pow(z-x,2)/pow(sin(z), 2);
	double b3 = pow(fabs(y-z),3)/cos(pow(y,2));
	b = b1+b2+b3;
}
// Обчислення функції a[x,y,z,b]
void ProjectClass::Fn_a(double x, double y, double z)
{
	double a1 = x+pow(z,3)/pow(pow(b,2)+y,2);
	double a2 = 1+exp(-(x-y))+pow(fabs(z),0.34);
	double a3 = pow(x+y,2);
	a = a1 / a2 + a3;
}
void ProjectClass::Fn_res(double y, double z) {
	 ProjectClass Tabul;
	for (double x = -1; x <= 1; x += 0.2) {
		Tabul.Fn_a(x, y, z);
		Tabul.Fn_b(x, y, z);
		std::cout << "Res a[" << x << "]: " << Tabul.geta() << std::endl;
		std::cout << "Res b[" << x << "]: " << Tabul.getb() << std::endl;
	}
}


