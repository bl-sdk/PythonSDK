#pragma once
#include "LUA/lua.hpp"

#define FFI_EXPORT extern "C" __declspec(dllexport)

class UObject;
class UFunction;
namespace CLua
{
	void Initialize();
	void Autorun();
	void CleanUp();
	lua_State* getLuaState();
	void SetupFunctions();
	void processLuaEngineHooks(UObject* object, UFunction* ufct, void*);
	void processPreRender();
	void callToggleVisibility();
}