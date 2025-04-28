#ifndef __POINT_H__


#define __POINT_H__
#include "tools.h"
class Point {
private:
	// x����
	int x;
	// y����
	int y;
	// ��ϣֵ
	unsigned int id;
	// �Ƿ�����ʱ���� 0-�� 1-����
	bool flag;
	// ���ֵ�
	static std::map<unsigned int, Point*>Point_map;
public:
	Point();
	// x���꣬y���꣬�Ƿ�����ʱ��������������ʱ��������ӵ����ֵ����ڽӱ���
	Point(const int, const int, const bool);
	// �������������Ƿ�����ʱ��������������ʱ������ӵ��ֵ���ڽӱ���ɾȥ�����Ϣ
	~Point();
	// �����ڴ���һ����ʱ�� Point
	Point(const Point&);
	int get_x() const;
	int get_y() const;
	unsigned int get_id() const;
	void set_x(const int);
	void set_y(const int);
	void set_id(const unsigned int);
	// ���ص��ֵ�ĵ�ַ
	static std::map<unsigned int, Point*>* map();
};

#endif