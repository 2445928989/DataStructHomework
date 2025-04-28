#include "Edge.h"
bool cmp_Edge_ptr::operator()(const Edge* e1, const Edge* e2)const {
	Point* O = e1->get_p1();
	Point* A = e1->get_p2();
	Point* B = e2->get_p2();
	return true;
}