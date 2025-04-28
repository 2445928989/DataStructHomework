#ifndef __POINT_H__


#define __POINT_H__
#include "tools.h"
class Point {
private:
	// x坐标
	int x;
	// y坐标
	int y;
	// 哈希值
	unsigned int id;
	// 是否是临时变量 0-是 1-不是
	bool flag;
	// 点字典
	static std::map<unsigned int, Point*>Point_map;
public:
	Point();
	// x坐标，y坐标，是否是临时变量，若不是临时变量则添加到点字典与邻接表中
	Point(const int, const int, const bool);
	// 析构函数会检测是否是临时变量，若不是临时变量则从点字典和邻接表中删去相关信息
	~Point();
	// 仅用于创建一个临时的 Point
	Point(const Point&);
	int get_x() const;
	int get_y() const;
	unsigned int get_id() const;
	void set_x(const int);
	void set_y(const int);
	void set_id(const unsigned int);
	// 返回点字典的地址
	static std::map<unsigned int, Point*>* map();
};

#endif