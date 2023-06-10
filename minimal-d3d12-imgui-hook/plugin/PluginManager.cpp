#include "PluginManager.h"
#include <imgui.h>

// Constructor
PluginManager::PluginManager() {
}

// Main Loop
void PluginManager::Present() {
}

// Destructor
PluginManager::~PluginManager() {
}

// KeyBinds
void PluginManager::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_KEYUP:



		if (wParam == VK_DELETE) {
			
		}


		break;
	default:
		break;
	}
}
