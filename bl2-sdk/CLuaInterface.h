#pragma once
#ifndef CLUAINTERFACE_H
#define CLUAINTERFACE_H

#include <lua.hpp>
#include <string>

enum LuaStatus
{
	LUA_OK,
	LUA_MODULE_ERROR
};

class CLuaInterface
{
public:
	CLuaInterface();
	~CLuaInterface();

	LuaStatus		InitializeModules();
	lua_State*		GetLuaState();
	int				RunString(const char* string);
	void			CallShutdownFuncs();

private:
	void			InitializeState();
	void			CleanupState();
	void			SetSDKValues();
	void			SetPaths();
	int				DoFile(const std::string& filename);
	int				DoFileAbsolute(const std::string& path);

	lua_State*		m_pState;
	std::string		m_luaPath;
	bool			m_modulesInitialized;
};

#endif