#include "Camera.h"


Camera::Camera(int _center_x = MAX_WIDTH / 2, int _center_y = MAX_HEIGHT / 2, int _scale = 5) 
	:center_x(_center_x), center_y(_center_y), scale(_scale),Source(nullptr),To(nullptr) {
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT);

}

Camera::~Camera() {
	closegraph();
}

int Camera::get_center_x() const
{
	return this->center_x;
}

int Camera::get_center_y() const
{
	return this->center_y;
}

int Camera::get_scale() const
{
	return this->scale;
}

Point* Camera::get_Source()
{
	return this->Source;
}

Point* Camera::get_To()
{
	return this->To;
}

void Camera::set_Source(Point*)
{
}

void Camera::set_To(Point*)
{
}

void Camera::set_center_x(const int)
{
}

void Camera::set_center_y(const int)
{
}

void Camera::set_scale(const int)
{
}

Point* Camera::get_nearest_point()
{
	return nullptr;
}

void Camera::draw_graph(std::vector<Point*>)
{
}

void Camera::draw_zoom()
{
}

void Camera::draw_shortest_path(std::vector<Edge*>)
{
}
