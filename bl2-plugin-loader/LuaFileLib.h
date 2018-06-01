#pragma once
#ifndef LUAFILELIB_H
#define LUAFILELIB_H

#include <lua.hpp>

#define LUA_FILELIBNAME "file"

int luaopen_file(lua_State* L);

#endif