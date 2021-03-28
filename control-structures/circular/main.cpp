#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
//circular class
class circular{
public:
	double radius, height;
	void set(double r, double h);
	//virtual function volume. Overridden by child classes
	virtual void volume(){
		cout << "volume is " << M_PI*radius*height;
	};
};

//set member function definition
void circular::set(double r, double h){
	radius = r;
	height = h;
}

//class cylinder inherits circular
class cylinder :public circular{
public:
	void volume(){ cout << "volume is " << M_PI*radius*height; };
};

//class cone inherits circular
class cone :public circular{
public:
	void volume(){ cout << "volume is " <<(M_PI*radius*height)/3; }
};
int main()
{
	cylinder cy; //object of class cylinder
	cone co; //object of class cone
	cy.set(14, 10);
	co.set(14, 5);
	cy.volume();
	co.volume();
	system("pause");
	return 0;
}
