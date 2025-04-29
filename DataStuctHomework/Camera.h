// �ṩ���ӻ��Ķ���
#ifndef __CAMERA_H__

#define __CAMERA_H__
#include "Edge.h"


class Camera {
private:
	// ��������ĵ��x����
	int center_x;
	// ��������ĵ��y����
	int center_y;
	// ÿ�����ص��Ӧ���ٸ���λ�ĵ�ͼ����
	int scale;
	// �ڻ�����ѡ���������·��ѯ�������յ�
	Point* Source, * To;
public:
	Camera(int, int, int);
	~Camera();
	int get_center_x() const;
	int get_center_y() const;
	int get_scale() const;
	Point* get_Source();
	Point* get_To();
	void set_Source(Point*);
	void set_To(Point*);
	void set_center_x(const int);
	void set_center_y(const int);
	void set_scale(const int);
	// ��ȡ��������ĵ�
	Point* get_nearest_point();
	// ÿ֡�Ի��������Ⱦ
	void draw_graph(std::vector<Point*>);
	// ÿ֡��������ͼ
	void draw_zoom();
	// �������·
	void draw_shortest_path(std::vector<Edge*>);
};


#endif