#include "stdafx.h"
#include "CLua.h"
#include "Logging.h"
#include "LUA/lua.hpp"
#include "Util.h"
#include "lfs/lfs.h"
#include "GameHooks.h"
#include <vector>

#if LUA_VERSION_NUM > 501
#define lua_strlen lua_rawlen
#endif

namespace CLua
{
	static int LUAFUNC_RemoveEngineHook(lua_State* L);
	static int LUAFUNC_AddEngineHook(lua_State* L);
	static int LUAFUNC_RemoveAllEngineHooks(lua_State* L);
	static int LUAFUNC_addPrerenderCallback(lua_State* L);
	static int LUAFUNC_removePrerenderCallback(lua_State* L);
	static int LUAFUNC_removeAllPrerenderCallbacks(lua_State* L);

	static lua_State	*m_pState = NULL;

	lua_State* getLuaState()
	{
		return m_pState;
	}

	static void getLuaDirPath(char *buffer)
	{
		const char *str = Util::MainLuaPath();

		::strncpy_s(buffer, MAX_PATH, str, MAX_PATH);
		unsigned l = strnlen_s(buffer, MAX_PATH);
		char *c = buffer + l;
		while (*c != '/' && *c != '\\') {
			*c = 0;
			c--;
		}
	}

	static int luaPath(lua_State* L)
	{
		char buffer[MAX_PATH];
		getLuaDirPath(buffer);
		lua_pushstring(L, buffer);
		return 1;
	}

	static int luaModPath(lua_State* L)
	{
		char buffer[MAX_PATH];
		getLuaDirPath(buffer);
		strncat_s(buffer, "mods", sizeof(buffer));
		lua_pushstring(L, buffer);
		return 1;
	}

	static int luaDestroy(lua_State* L)
	{
		const void *v = lua_topointer(L, 1);
		delete v;
		return 0;
	}

	static int logServer(lua_State* L)
	{
		const char *str = luaL_checkstring(L, 1);
		Logging::LogF(str);
		return 0;
	}

	static int logConsole(lua_State* L)
	{
		const char *str = luaL_checkstring(L, 1);
		//BL2SDK::logToConsole(str);
		Logging::LogF(str); //debug
		return 0;
	}

	//Global functions
	static const luaL_Reg base_funcs[] = {
	{ "luaPath", luaPath },
	{ "luaModPath", luaModPath },
	{ "luaDestroy", luaDestroy },
	{ "addEngineHook", LUAFUNC_AddEngineHook },
	{ "removeEngineHook", LUAFUNC_RemoveEngineHook },
	{ "removeAllEngineHooks", LUAFUNC_RemoveAllEngineHooks },
	{ "addPrerenderCallback", LUAFUNC_addPrerenderCallback },
	{ "removePrerenderCallback", LUAFUNC_removePrerenderCallback },
	{ "removeAllPrerenderCallbacks", LUAFUNC_removeAllPrerenderCallbacks },
	{ NULL, NULL }
	};

	//"log" library
	static const luaL_Reg log[] = {
	{ "server", logServer },
	{ "console", logConsole },
	{ NULL, NULL }
	};

	void SetupFunctions()
	{
		//register global functions
#if LUA_VERSION_NUM > 501
		lua_getglobal(m_pState, "_G");
		luaL_setfuncs(m_pState, base_funcs, 0);
#else
		lua_pushvalue(m_pState, LUA_GLOBALSINDEX);
		luaL_register(m_pState, NULL, base_funcs);
#endif

		//Register local libraries
#if LUA_VERSION_NUM > 501
		lua_newtable(m_pState);
		luaL_setfuncs(m_pState, log, 0);
		lua_pushvalue(m_pState, -1);
		lua_setglobal(m_pState, "log");
#else
		lua_pushvalue(m_pState, LUA_GLOBALSINDEX);
		luaL_register(m_pState, "log", log);
#endif

		//reset the stack (not required)
		lua_settop(m_pState, 0);
	}

	void Initialize()
	{
		if (m_pState)
			return;

		m_pState = luaL_newstate();
		luaL_openlibs(m_pState); //Opens all standard Lua libraries into the given state.
		//luaopen_lfs(m_pState);
		SetupFunctions();
	}

	void Autorun()
	{
		const char	*mainLua = Util::MainLuaPath();
		Logging::LogF("Lua initialized (" LUA_VERSION "). Loading %s...", mainLua);
		if (*mainLua)
		{
			int err = luaL_loadfile(m_pState, mainLua);
			if (err)
			{
				Logging::LogF("luaL_loadfile: %s\n", lua_tostring(m_pState, -1));
			}
			else
			{
				err = lua_pcall(m_pState, 0, LUA_MULTRET, 0); //run lua
				if (err)
				{
					Logging::LogF("lua_pcall: %s\n", lua_tostring(m_pState, -1));
				}
				else
				{
					lua_getglobal(m_pState, "initialize"); //get init function
					err = lua_pcall(m_pState, 0, 0, 0); //run init function
					if (err)
					{
						Logging::LogF("Failed to load autorun: %s\n", lua_tostring(m_pState, -1));
					}
				}
			}
			Logging::LogF("...autorun.lua loaded.");
		}
	}

	void CleanUp()
	{
		if (!m_pState)
			return;
		int err;

		lua_getglobal(m_pState, "cleanup"); //get cleanup function
		err = lua_pcall(m_pState, 0, 0, 0); //run cleanup function
		if (err)
		{
			Logging::LogF("Failed to cleanup autorun: %s\n", lua_tostring(m_pState, -1));
		}

		lua_close(m_pState);
		m_pState = NULL;
	}

	static std::map<std::string, std::string>	luaEngineHooks;
	static int LUAFUNC_AddEngineHook(lua_State* L)
	{
		const char *cfctName = luaL_checkstring(L, 1);
		const char *ccallbackName = luaL_checkstring(L, 2);

		std::string fctName(cfctName);
		std::string callbackName(ccallbackName);

		luaEngineHooks[callbackName] = fctName;

		return 0;
	}

	static int LUAFUNC_RemoveEngineHook(lua_State* L)
	{
		const char *ccallbackName = luaL_checkstring(L, 1);
		luaEngineHooks.erase(ccallbackName);
		return 0;
	}

	static int LUAFUNC_RemoveAllEngineHooks(lua_State* L)
	{
		luaEngineHooks.clear();//still needs thread safety
		return 0;
	}

	void processLuaEngineHooks(UObject* object, UFunction* ufct, void* parms)
	{
		std::string fctName = ufct->GetFullName();
		for (std::map<std::string, std::string>::iterator it = luaEngineHooks.begin(); it != luaEngineHooks.end(); ++it)
		{
			if (it->second == fctName)
			{
				const char *n = it->first.c_str();
				const char *c = strstr(n, ".") + 1;
				char buffer[50];
				strncpy_s(buffer, n, c - n - 1);

				lua_getglobal(m_pState, buffer);
				lua_getfield(m_pState, -1, c);
				if (!lua_isfunction(m_pState, -1))
				{
					Logging::LogF("Lua callback not found: Table=%s Field=%s", buffer, c);
				}
				else
				{
					/*lua_pushinteger(m_pState, (lua_Integer)object);
					lua_pushinteger(m_pState, (lua_Integer)ufct);
					lua_pushinteger(m_pState, (lua_Integer)parms);*/
					lua_call(m_pState, 0, 0);
				}
			}
		}
	}

	static std::vector<std::string>	prerenderCallbacks;
	static int LUAFUNC_addPrerenderCallback(lua_State* L)
	{
		const char *ccallbackName = luaL_checkstring(L, 1);
		std::string callbackName(ccallbackName);
		prerenderCallbacks.insert(prerenderCallbacks.end(), callbackName);
		return 0;
	}

	static int LUAFUNC_removeAllPrerenderCallbacks(lua_State* L)
	{
		prerenderCallbacks.clear();
		return 0;
	}

	static int LUAFUNC_removePrerenderCallback(lua_State* L)
	{
		const char *ccallbackName = luaL_checkstring(L, 1);
		std::string callbackName(ccallbackName);
		//prerenderCallbacks.erase(std::remove(prerenderCallbacks.begin(), prerenderCallbacks.end(), callbackName), prerenderCallbacks.end()); //??
		for (std::vector<std::string>::iterator it = prerenderCallbacks.begin(); it != prerenderCallbacks.end(); ++it)
		{
			if (*it == callbackName)
			{
				prerenderCallbacks.erase(it);
				break;
			}
		}
		return 0;
	}

	static int processPreRenderCount = 0;
	void processPreRender()
	{
		processPreRenderCount++;
		if (6 != processPreRenderCount)
			return;
		processPreRenderCount = 0;
		for (std::vector<std::string>::iterator it = prerenderCallbacks.begin(); it != prerenderCallbacks.end(); ++it)
		{
			const char *n = it->c_str();
			const char *c = strstr(n, ".") + 1;
			char buffer[50];
			strncpy_s(buffer, n, c - n - 1);

			lua_getglobal(m_pState, buffer);
			lua_getfield(m_pState, -1, c);
			if (!lua_isfunction(m_pState, -1))
			{
				Logging::LogF("Lua callback not found: Table=%s Field=%s", buffer, c);
			}
			else
			{
				lua_call(m_pState, 0, 0);
			}
		}
	}

	void callToggleVisibility()
	{
		if (!m_pState)
			return;
		lua_getglobal(m_pState, "toggle_visibility");
		lua_pcall(m_pState, 0, 0, 0);
	}
}
