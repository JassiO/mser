
#include <point.h>

point::point():
	x(0.0),
	y (0.0)
	{}

point::point(point const& p):
	x(p.get_x()),
	y(p.get_y())
	{}

point::~point() {}

//getter
double point::get_x() const {
	return x;
}

double point::get_y() const {
	return y;
}

//setter
void point::set_x(double s) {
	x = s;
}


void point::set_y(double s) {
	y = s;
}