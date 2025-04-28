#include "Edge.h"



std::map<unsigned int, Edge*> Edge::Edge_map;
std::map<unsigned int, std::set<Edge>> Edge::graph;

Edge::Edge() {}

Edge::Edge(Point* _p1, Point* _p2):p1(_p1),p2(_p2) {}

Edge::~Edge() {

}