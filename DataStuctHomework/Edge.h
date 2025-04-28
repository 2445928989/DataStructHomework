// 提供边的定义
#ifndef __EDGE_H__
#define __EDGE_H__
#include "Point.h"
#include "Comparator.h"

class Edge {
private:
	// 边的起点与终点 p1为起点 p2为终点，不可颠倒
	Point* p1, * p2;
	unsigned int id;
	// 这条边的容纳能力
	int n;
	// 这条边上的车流量
	int v;
	// 是否是临时变量 0-是 1-不是
	bool flag;
	// 边字典
	static std::map<unsigned int, Edge*>Edge_map;
	// 邻接表 key为起点的id value为所有从该点出发的边集，边集以x轴正半轴为起点顺时针极角排序
	static std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>>Graph;
public:
	Edge();
	// 边起点，边终点，是否是临时变量，边容量，边车流量，若不是临时变量则添加到边字典与邻接表中
	Edge(Point*, Point*, const bool, const int, const int);
	~Edge();
	Point* get_p1() const;
	Point* get_p2() const;
	int get_n() const;
	int get_v() const;
	// 返回边的长度
	double get_len() const;
	// 返回边的代价
	double get_cost() const;
	unsigned int get_id() const;
	void set_p1(Point*);
	void set_p2(Point*);
	void set_id(const unsigned int);
	void set_n(const int);
	void set_v(const int);
	// 返回边字典的地址
	static std::map<unsigned int, Edge*>* map();
	// 返回邻接表的地址
	static std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>>* graph();
	// 返回以x轴正半轴为起点的顺时针极角序
	// 返回一个反向边，可以选择是否是临时变量
	Edge reverse(const bool) const;
};


#endif