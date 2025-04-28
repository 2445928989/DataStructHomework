#include "Point.h"
#include "Random.h"


std::map<unsigned int, Point*> Point::Point_map;
Point::Point() :x(0), y(0), id(0) {}
Point::Point(const int _x, const int _y) :x(_x), y(_y), id(0) {
	bool done = 0;
	while (!done) {
		int temp_id = Random::rnd();
		if (!Point_map.count(temp_id)) {
			this->id = temp_id;
			done = 1;
		}
	}
}
Point::~Point() {
	Point_map.erase(Point_map.find(this->id));
}
int Point::get_x() {
	return this->x;
}
int Point::get_y() {
	return this->y;
}
unsigned int Point::get_id() {
	return this->id;
}
void Point::set_x(const int _x) {
	this->x = _x;
}
void Point::set_y(const int _y) {
	this->y = _y;
}
void Point::set_id(const unsigned int _id) {
	this->id = _id;
}
