#include "stdafx.h"
#include "menu.h"

extern IMGUI_API LRESULT ImGui_ImplDX9_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

HWND game_hwnd = NULL;
WNDPROC game_wndproc = NULL;
DWORD hwnd_pid = NULL;

Menu::Menu()
{
	visible = true;//false; //hide by default

	D3DDEVICE_CREATION_PARAMETERS params;
	d3dDevice9->GetCreationParameters(&params);
	ImGui_ImplDX9_Init(GetActiveWindow(), d3dDevice9);
}

Menu::~Menu()
{
}

void Menu::draw() {
	if (!visible) {
		return;
	}

	ImGui_ImplDX9_NewFrame();

	ImGui::GetIO().MouseDrawCursor = visible;

	ImGui::SetNextWindowPos(ImVec2{ 0, 0 }, ImGuiSetCond_Once);
	ImGui::SetNextWindowSize(ImVec2{ 1000, 0 }, ImGuiSetCond_Once);

	ImGui::Begin("Robeth's Fun Menu", &visible, ImGuiWindowFlags_NoCollapse);
	ImGui::Button("Invert Gravity");
	ImGui::End();
}

BOOL CALLBACK find_game_hwnd(HWND hwnd, LPARAM game_pid) {
	// Skip windows not belonging to the game process.
	DWORD hwnd_pid = NULL;

	GetWindowThreadProcessId(hwnd, &hwnd_pid);

	if (hwnd_pid != game_pid)
		return TRUE;

	// Set the target window handle and stop the callback.
	game_hwnd = hwnd;

	return FALSE;
}

LRESULT STDMETHODCALLTYPE Menu::user_wndproc(HWND window, UINT message_type, WPARAM w_param, LPARAM l_param) {
	// You'll probably want to add a check here so it only calls the ImGui handler when the GUI is active..
	//ImGui_ImplDX9_WndProcHandler(window, message_type, w_param, l_param);

	// ..but we'll be calling both WndProc functions here to keep things simple.
	return CallWindowProc(game_wndproc, window, message_type, w_param, l_param);
};

HRESULT STDMETHODCALLTYPE Menu::user_present(IDirect3DDevice9* thisptr, const RECT* src, const RECT* dest, HWND wnd_override, const RGNDATA* dirty_region) {
	// Perform general setup tasks when this function is called for the first time.
	static bool is_initialised = false;

	if (!is_initialised) {
		// Find a handle to the first top-level window belonging to the game process.
		EnumWindows(find_game_hwnd, GetCurrentProcessId());

		if (game_hwnd != NULL) {
			// Swap out the window message handler for our own, allowing us to intercept input events.
			//game_wndproc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(game_hwnd, GWLP_WNDPROC, LONG_PTR(user_wndproc)));

			// Perform final ImGui setup tasks and..
			ImGui_ImplDX9_Init(game_hwnd, thisptr);

			// ..we're all done!
			is_initialised = true;
		}
	}
	else {
		// Just the usual ImGui rendering stuff here.
		ImGui_ImplDX9_NewFrame();
		draw();
		ImGui::Render();
	}

	// Call the original 'Present' function.
	return Menu::original_present(thisptr, src, dest, wnd_override, dirty_region);
}

HRESULT STDMETHODCALLTYPE Menu::user_reset(IDirect3DDevice9* thisptr, D3DPRESENT_PARAMETERS* params) {
	// Destroy and re-create device objects when the device resets.
	ImGui_ImplDX9_InvalidateDeviceObjects();
	ImGui_ImplDX9_CreateDeviceObjects();

	// Call the original 'Reset' function.
	return Menu::original_reset(thisptr, params);
}