#include "Edge.h"
#include "Random.h"


std::map<unsigned int, Edge*> Edge::Edge_map;
std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>> Edge::Graph;

Edge::Edge() :p1(nullptr), p2(nullptr), n(0), v(0), id(0), flag(0) {}

Edge::Edge(Point* _p1, Point* _p2, const bool _flag = 0, const int _n = 0, const int _v = 0) :p1(_p1), p2(_p2), flag(_flag), n(_n), v(_n) {
	if (_flag) {
		bool done = 0;
		while (!done) {
			int temp_id = Random::rnd();
			if (!Edge_map.count(temp_id)) {
				this->id = temp_id;
				done = 1;
				Edge_map[temp_id] = this;
			}
		}
	}
}

Edge::~Edge() {
	if (this->flag) {
		int p1_id = this->p1->get_id();
		Graph[p1_id].erase(Graph[p1_id].find(this));
	}
}

Point* Edge::get_p1() const {
	return p1;
}
Point* Edge::get_p2() const {
	return p2;
}

std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>>* Edge::graph() {
	return &Graph;
}

double Edge::get_cost() const
{
	return 0.0;
}

unsigned int Edge::get_id() const
{
	return 0;
}

void Edge::set_p1(Point* _p1) {
	this->p1 = _p1;
}

void Edge::set_p2(Point* _p2) {
	this->p2 = _p2;
}

void Edge::set_id(const unsigned int _id) {
	this->id = _id;
}

void Edge::set_n(const int _n) {
	this->n = _n;
}

void Edge::set_v(const int _v) {
	this->v = _v;
}
