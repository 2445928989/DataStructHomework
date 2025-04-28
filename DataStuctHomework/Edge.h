// �ṩ�ߵĶ���
#ifndef __EDGE_H__
#define __EDGE_H__
#include "Point.h"
#include "Comparator.h"

class Edge {
private:
	// �ߵ�������յ� p1Ϊ��� p2Ϊ�յ㣬���ɵߵ�
	Point* p1, * p2;
	unsigned int id;
	// �����ߵ���������
	int n;
	// �������ϵĳ�����
	int v;
	// �Ƿ�����ʱ���� 0-�� 1-����
	bool flag;
	// ���ֵ�
	static std::map<unsigned int, Edge*>Edge_map;
	// �ڽӱ� keyΪ����id valueΪ���дӸõ�����ı߼����߼���x��������Ϊ���˳ʱ�뼫������
	static std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>>Graph;
public:
	Edge();
	// ����㣬���յ㣬�Ƿ�����ʱ���������������߳���������������ʱ��������ӵ����ֵ����ڽӱ���
	Edge(Point*, Point*, const bool, const int, const int);
	~Edge();
	Point* get_p1() const;
	Point* get_p2() const;
	int get_n() const;
	int get_v() const;
	// ���رߵĳ���
	double get_len() const;
	// ���رߵĴ���
	double get_cost() const;
	unsigned int get_id() const;
	void set_p1(Point*);
	void set_p2(Point*);
	void set_id(const unsigned int);
	void set_n(const int);
	void set_v(const int);
	// ���ر��ֵ�ĵ�ַ
	static std::map<unsigned int, Edge*>* map();
	// �����ڽӱ�ĵ�ַ
	static std::map<unsigned int, std::set<Edge*, cmp_Edge_ptr>>* graph();
	// ������x��������Ϊ����˳ʱ�뼫����
	// ����һ������ߣ�����ѡ���Ƿ�����ʱ����
	Edge reverse(const bool) const;
};


#endif