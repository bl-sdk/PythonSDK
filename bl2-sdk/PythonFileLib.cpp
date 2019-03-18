#include "stdafx.h"
#include "LuaFileLib.h"
#include <lfs.h>
#include "Settings.h"
#include "Util.h"
#include "Logging.h"
#include <string>
#include <algorithm>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define ToFileP(L) ((FILE**)luaL_checkudata(L, 1, LUA_FILEHANDLE))

static int (lua_State *L, int i, const char *filename) {
	int en = errno;  /* calls to Lua API may change this value */
	if (i) {
		lua_pushboolean(L, 1);
		return 1;
	}
	else {
		lua_pushnil(L);
		if (filename)
			lua_pushfstring(L, "%s: %s", filename, strerror(en));
		else
			lua_pushfstring(L, "%s", strerror(en));
		lua_pushinteger(L, en);
		return 3;
	}
}

static FILE** file_createfileud(lua_State* L)
{
	FILE** pf = (FILE**)lua_newuserdata(L, sizeof(FILE*));
	*pf = NULL; // default invalid handle
	luaL_getmetatable(L, LUA_FILEHANDLE);
	lua_setmetatable(L, -2);
	return pf;
}

static FILE* ToFileSafe(lua_State* L)
{
	FILE** pf = ToFileP(L);
	if (*pf == NULL)
		luaL_error(L, "attempt to use a closed file");
	return *pf;
}

static int file_createdir(lua_State* L)
{
	size_t len = 0;
	const char* path = luaL_checklstring(L, 1, &len);
	if (len == 0)
	{
		return luaL_argerror(L, 1, "Path was empty");
	}

	std::string strPath = path;

	// Fix slashes
	std::replace(strPath.begin(), strPath.end(), '/', '\\');

	// Check for up directory
	if (strPath.find("..") != std::string::npos)
	{
		return luaL_argerror(L, 1, "Path was invalid");
	}

	std::wstring wstrPath = Util::Widen(strPath);
	std::wstring absPath = Settings::GetLuaFile(wstrPath);

	Logging::LogF((char*)absPath.c_str());

	if (!CreateDirectory(absPath.c_str(), NULL))
	{
		return luaL_error(L, "Failed to create directory (GetLastError = %d)", GetLastError());
	}

	return 0;
}

static int file_isdir(lua_State* L)
{
	const char* filename = luaL_checkstring(L, 1);
	std::wstring wstrPath = Util::Widen(filename);
	std::wstring absPath = Settings::GetLuaFile(wstrPath);

	DWORD dwAttrib = GetFileAttributes(absPath.c_str());
	lua_pushboolean(L, (dwAttrib != INVALID_FILE_ATTRIBUTES && (dwAttrib & FILE_ATTRIBUTE_DIRECTORY)));

	return 1;
}

static int file_exists(lua_State* L)
{
	const char* filename = luaL_checkstring(L, 1);
	std::wstring wstrPath = Util::Widen(filename);
	std::wstring absPath = Settings::GetLuaFile(wstrPath);

	DWORD dwAttrib = GetFileAttributes(absPath.c_str());
	lua_pushboolean(L, (dwAttrib != INVALID_FILE_ATTRIBUTES && !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY)));

	return 1;
}

static int file_open(lua_State* L)
{
	const char* filename = luaL_checkstring(L, 1);
	const char* mode = luaL_optstring(L, 2, "r");

	std::string strFilename = filename;
	std::string strMode = mode;

	// Fix slashes
	std::replace(strFilename.begin(), strFilename.end(), '/', '\\');

	// Check for up directory
	if (strFilename.find("..") != std::string::npos)
	{
		return luaL_argerror(L, 1, "Path to file was invalid");
	}

	std::wstring wideFile = Util::Widen(strFilename);
	std::wstring wAbsPath = Settings::GetLuaFile(wideFile);
	std::string absPath = Util::Narrow(wAbsPath);

	FILE** pf = file_createfileud(L);
	*pf = fopen(absPath.c_str(), mode);
	return (*pf == NULL) ? pushresult(L, 0, filename) : 1;
}

static int file_close(lua_State* L)
{
	//Logging::Log("[Lua] File_close called\n");
	FILE** pFile = ToFileP(L);
	if (*pFile != NULL)
	{
		fclose(*pFile);
		*pFile = NULL;
	}
	return 0;
}

static int file_write(lua_State* L)
{
	FILE* file = ToFileSafe(L);

	// If it's nil, just smile and wave
	if (lua_isnoneornil(L, 2))
	{
		lua_pushboolean(L, true);
		return 1;
	}

	size_t len = 0;
	const char* data = luaL_checklstring(L, 2, &len);
	return pushresult(L, fwrite(data, sizeof(char), len, file) == 1, NULL);
}

static int file_gc(lua_State* L)
{
	file_close(L);
	return 0;
}

static int file_tostring(lua_State* L)
{
	FILE* file = *ToFileP(L);
	if (file == NULL)
	{
		lua_pushliteral(L, "file (closed)");
	}
	else
	{
		lua_pushfstring(L, "file (%p)", file);
	}
	return 1;
}

static const luaL_Reg flib[] = {
	{ "close", file_close },
	//{"read", f_read}, TODO: Reading files, who needs that anyway
{ "write", file_write },
{ "__gc", file_gc },
{ "__tostring", file_tostring },
{ NULL, NULL }
};

static void file_createmeta(lua_State* L)
{
	luaL_newmetatable(L, LUA_FILEHANDLE);
	lua_pushvalue(L, -1);
	lua_setfield(L, -2, "__index");
	luaL_register(L, NULL, flib);
	lua_pop(L, 1);
}

static const luaL_Reg filelib[] = {
	{ "CreateDir", file_createdir },
{ "Exists", file_exists },
{ "IsDir", file_isdir },
{ "Open", file_open },
{ NULL, NULL }
};

int luaopen_file(lua_State* L)
{
	file_createmeta(L);

	luaL_register(L, LUA_FILELIBNAME, filelib);
	lua_pop(L, 1);

	return 0;
}

