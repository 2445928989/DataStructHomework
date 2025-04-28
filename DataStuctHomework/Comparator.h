// 提供比较器的定义
#ifndef __COMPARATOR_H__
#define __COMPARATOR_H__

class Edge;
class cmp_Edge_ptr {
public:
	bool operator()(const Edge*, const Edge*) const;
};
class cmp_Point_ptr {

};

#endif