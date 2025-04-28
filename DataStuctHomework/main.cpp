#include "Generator.h"
int main() {
	SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);// 设置该进程不受系统 DPI 设置影响
	return 0;
}