#pragma once
#include <vector>
#include <Windows.h>

class PluginManager {
private:
public:
	PluginManager();
	~PluginManager();
	void Present();
	void WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};

