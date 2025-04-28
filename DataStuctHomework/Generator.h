#ifndef __GENERATOR_H__

#define __GENERATOR_H__
#include "Edge.h"


class Generator {
private:
	std::map<unsigned int, Edge*>* Edge_map;
	std::map<unsigned int, std::set<Edge>>* graph;
	std::map<unsigned int, Point*>* Point_map;
};


#endif