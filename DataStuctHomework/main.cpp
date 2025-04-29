#include "Generator.h"
#include "Camera.h"
int main() {
	SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);// 设置该进程不受系统 DPI 设置影响
	Camera camera(MAX_WIDTH / 2, MAX_HEIGHT / 2, 5);
	BeginBatchDraw();
	bool running = 1;
	int x = 0, y = 0;
	while (running) {
		FlushBatchDraw();
		ExMessage msg;
		while (peekmessage(&msg))
		{
			if (msg.message == WM_MOUSEMOVE)
			{
				x = msg.x;
				y = msg.y;
			}
		}
		setbkcolor(RGB(255, 255, 255));
		cleardevice();
		setlinecolor(RGB(255, 0, 0));
		line(0, 0, x, y);
		setlinecolor(RGB(0, 0, 255));
		line(WINDOW_WIDTH, WINDOW_HEIGHT, x, y);
		setfillcolor(RGB(0, 255, 0));
		solidcircle(x, y, 15);
	}
	return 0;
}