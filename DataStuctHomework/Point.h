#ifndef __POINT_H__


#define __POINT_H__
#include "tools.h"
class Point {
private:
	int x;
	int y;
	unsigned int id;
	static std::map<unsigned int, Point*>Point_map;
public:
	Point();
	Point(const int, const int);
	~Point();
	int get_x();
	int get_y();
	unsigned int get_id();
	void set_x(const int);
	void set_y(const int);
	void set_id(const unsigned int);
};

#endif