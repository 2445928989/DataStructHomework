#include "Random.h"
#include "Edge.h"
std::map<unsigned int, Point*> Point::Point_map;
Point::Point() :x(0), y(0), id(0), flag(0) {}
Point::Point(const int _x, const int _y, const bool _flag = 0) :x(_x), y(_y), id(0), flag(_flag) {
	if (_flag) {
		bool done = 0;
		while (!done) {
			int temp_id = Random::rnd();
			if (!Point_map.count(temp_id)) {
				this->id = temp_id;
				done = 1;
				Point_map[temp_id] = this;
				Edge::graph()->insert(std::make_pair(this->id, std::set<Edge*, cmp_Edge_ptr>()));
			}
		}
	}
}
Point::Point(const Point& other) {
	this->x = other.x;
	this->y = other.y;
	this->id = other.id;
}
Point::~Point() {
	if (flag) {
		Point_map.erase(Point_map.find(this->id));
		Edge::graph()->erase(Edge::graph()->find(this->id));
	}
}
int Point::get_x() const {
	return this->x;
}
int Point::get_y() const {
	return this->y;
}
unsigned int Point::get_id() const {
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
std::map<unsigned int, Point*>* Point::map() {
	return &Point::Point_map;
}