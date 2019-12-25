#include "point.h"
#include <cmath.h>

Point::Point(){
	x=0;
	y=0;
}

Point::Point(double ax,double ay){
	x=ax;
	y=ay;
}

Point::~Point()
{}

double Point::get_x() const {
	return x;
}

double Point::get_y() const {
	return y;
}

double distance(Point& A,Point &B) {
	double dif1=A.get_x()-B.get_x();
	double dif2=A.get_y()-B.get_y();
	double dist=dif1*dif1+dif2*dif2;
	return (sqrt(dist));
}
