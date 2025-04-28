#ifndef __EDGE_H__
#define __EDGE_H__
#include "Point.h"
class Edge {
private:
	Point* p1, * p2;
	unsigned int id;
	int n;
	int v;
	static std::map<unsigned int, Edge*>Edge_map;
	static std::map<unsigned int, std::set<Edge>>graph;
public:
	Edge();
	Edge(Point*, Point*);
	~Edge();
	Point* get_p1();
	Point* get_p2();
	int get_n();
	int get_v();
	double get_len();
	double get_cost();
	unsigned int get_id();
	void set_p1(Point*);
	void set_p2(Point*);
	void set_id(unsigned int);
	void set_n(int);
	void set_v(int);
};


#endif