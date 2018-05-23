#ifndef CLUA_H
#define CLUA_H

#include "lua.hpp"
#include <string>

struct FileHash
{
	const wchar_t* file;
	const char* hash;
};

enum LuaStatus
{
	LUA_OK,
	LUA_HASH_FAILED,
	LUA_MODULE_ERROR
};

class CLua
{
public:
	CLua();
	~CLua();

	LuaStatus		InitializeModules();
	lua_State*		GetLuaState();
	int				RunString(const char* string);
	void			CallShutdownFuncs();

private:
	void			InitializeState();
	void			CleanupState();
	void			SetSDKValues();
	void			SetPaths();
	bool			VerifyLuaFiles();
	bool			CheckHash(FileHash* fileHash);
	int				DoFile(const std::string& filename);
	int				DoFileAbsolute(const std::string& path);

	lua_State*		m_pState;
	std::string		m_luaPath;
	bool			m_modulesInitialized;
};

#endif