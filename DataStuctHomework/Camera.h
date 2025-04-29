// 提供可视化的定义
#ifndef __CAMERA_H__

#define __CAMERA_H__
#include "Edge.h"


class Camera {
private:
	// 相机的中心点的x坐标
	int center_x;
	// 相机的中心点的y坐标
	int center_y;
	// 每个像素点对应多少个单位的地图坐标
	int scale;
	// 在画面中选定进行最短路查询的起点和终点
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
	// 获取离光标最近的点
	Point* get_nearest_point();
	// 每帧对画面进行渲染
	void draw_graph(std::vector<Point*>);
	// 每帧绘制缩略图
	void draw_zoom();
	// 绘制最短路
	void draw_shortest_path(std::vector<Edge*>);
};


#endif