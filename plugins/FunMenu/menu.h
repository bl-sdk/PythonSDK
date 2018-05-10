#pragma once

#ifndef MENU
#define MENU

class Menu
{
public:
	Menu();
	~Menu();

	void draw();

	void show() { visible = true; }
	void hide() { visible = false; }
	void toggle() { visible = !visible; }

	bool isVisible() const { return visible; }

	// The 'original' Present and Reset functions that will be called at the end of our hooks.
	HRESULT(STDMETHODCALLTYPE *original_present) (IDirect3DDevice9*, const RECT*, const RECT*, HWND, const RGNDATA*);
	HRESULT(STDMETHODCALLTYPE *original_reset) (IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);

	// Our replacement functions that will be put in place upon library load.
	HRESULT(STDMETHODCALLTYPE user_present) (IDirect3DDevice9*, const RECT*, const RECT*, HWND, const RGNDATA*);
	HRESULT(STDMETHODCALLTYPE user_reset) (IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);

	// Window message handling function.
	LRESULT(STDMETHODCALLTYPE user_wndproc) (HWND, UINT, WPARAM, LPARAM);

private:
	bool visible;

	IDirect3DDevice9 * d3dDevice9 = nullptr;
};

#endif // MENU