#pragma once

#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN

#include <pybind11/pybind11.h>
#include <pybind11/embed.h>
#include <pybind11/stl.h>
#include <Python.h>

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <ShlObj.h>
#include <string>
#include <map>
#include <regex>
#include <typeinfo>

#include <Shlwapi.h>
#pragma comment (lib, "Shlwapi.lib")

namespace BL2SDK
{
	extern void* pGObjects;
	extern void* pGNames;
	extern void* pGObjHash;
	extern void* pGCRCTable;
	extern void* pNameHash;
}

#include "gamedefines.h"
#include "logging.h"

namespace BL2SDK
{
	extern void* pTextureFixLocation;
	extern FMalloc** pGMalloc;
}

#include "Core_structs.h"
#include "Core_f_structs.h"
#include "Core_classes.h"
//#include "Core_functions.h"

#include "Engine_structs.h"
#include "Engine_f_structs.h"
#include "Engine_classes.h"
//#include "Engine_functions.h"

#include "GameFramework_structs.h"
#include "GameFramework_f_structs.h"
#include "GameFramework_classes.h"
//#include "GameFramework_functions.h"

#include "GFxUI_structs.h"
#include "GFxUI_f_structs.h"
#include "GFxUI_classes.h"
//#include "GFxUI_functions.h"

#include "GearboxFramework_structs.h"
#include "GearboxFramework_f_structs.h"
#include "GearboxFramework_classes.h"
//#include "GearboxFramework_functions.h"

#include "IpDrv_structs.h"
#include "IpDrv_f_structs.h"
#include "IpDrv_classes.h"
//#include "IpDrv_functions.h

#include "OnlineSubsystemSteamworks_structs.h"
#include "OnlineSubsystemSteamworks_f_structs.h"
#include "OnlineSubsystemSteamworks_classes.h"
//#include "OnlineSubsystemSteamworks_functions.h"

#include "WillowGame_structs.h"
#include "WillowGame_f_structs.h"
#include "WillowGame_classes.h"
//#include "WillowGame_functions.h"

#include "WinDrv_structs.h"
#include "WinDrv_f_structs.h"
#include "WinDrv_classes.h"
//#include "WinDrv_functions.h"

#include "XAudio2_structs.h"
#include "XAudio2_f_structs.h"
#include "XAudio2_classes.h"
//#include "XAudio2_functions.h"

#include "AkAudio_structs.h"
#include "AkAudio_f_structs.h"
#include "AkAudio_classes.h"
//#include "AkAudio_functions.h"

#include "TypeMap.h"

namespace pybind11 {
	template <typename itype> struct polymorphic_type_hook<itype, detail::enable_if_t<std::is_polymorphic<itype>::value>>
	{
		static const void *get(const itype *src, const std::type_info*& type) {
			if (src && std::is_base_of<UObject, itype>::value) {
				if (((UObject *)src)->Class) {
					std::string type_name = ((UObject *)src)->Class->GetNameCPP();
					if (uobject_type_map.count(type_name))
						type = uobject_type_map[type_name];
					else
						type = &typeid(UObject);
				}
				else 
					type = &typeid(UObject);
				return src;
			}
			type = src ? &typeid(*src) : nullptr;
			return dynamic_cast<const void*>(src);
		}
	};
}



//
//typedef struct {
//	PyObject_HEAD
//} PyTArrayObject;
//
//static PyTypeObject PyTArrayType = {
//	PyVarObject_HEAD_INIT(NULL, 0)
//	"bl2sdk.TArray",                            /*tp_name*/
//	sizeof(PyTArrayObject),                     /*tp_basicsize*/
//	0,                                          /*tp_itemsize*/
//	0,                                          /*tp_dealloc*/
//	0,                                          /*tp_print*/
//	0,                                          /*tp_getattr*/
//	0,                                          /*tp_setattr*/
//	0,                                          /*tp_compare*/
//	0,                                          /*tp_repr*/
//	0,                                          /*tp_as_number*/
//	0,                                          /*tp_as_sequence*/
//	0,                                          /*tp_as_mapping*/
//	0,                                          /*tp_hash */
//	0,                                          /*tp_call*/
//	0,                                          /*tp_str*/
//	0,                                          /*tp_getattro*/
//	0,                                          /*tp_setattro*/
//	0,                                          /*tp_as_buffer*/
//	Py_TPFLAGS_DEFAULT,                         /*tp_flags*/
//	0,                                          /*tp_doc*/
//	0,										    /*tp_traverse*/
//	0,                                          /*tp_clear*/
//	0,                                          /*tp_richcompare*/
//	0,                                          /*tp_weaklistoffset*/
//	0,                                          /*tp_iter*/
//	0,                                          /*tp_iternext*/
//	0,                                          /*tp_methods*/
//	0,                                          /*tp_members*/
//	0,                                          /*tp_getsets*/
//	0,                                          /*tp_base*/
//	0,                                          /*tp_dict*/
//	0,                                          /*tp_descr_get*/
//	0,                                          /*tp_descr_set*/
//	0,                                          /*tp_dictoffset*/
//	0,                                          /*tp_init*/
//	0,                                          /*tp_alloc*/
//	PyType_GenericNew,                          /*tp_new*/
//};
//
//static pybind11::object help_cast(PyTArray *tarray) {
//	return pybind11::cast(tarray);
//}
//
//namespace pybind11
//{
//	namespace detail
//	{
//		template <typename Type, typename Value> struct tarray_pointer_caster {
//			using value_conv = make_caster<Value>;
//
//			bool load(handle src, bool convert) {
//				Logging::LogF("Unimplemented: Assigning value to custom TArray\n");
//				return false;
//			}
//
//		private:
//			template <typename T = Type,
//				enable_if_t<std::is_same<decltype(std::declval<T>().reserve(0)), void>::value, int> = 0>
//				void reserve_maybe(sequence s, Type *) { value.reserve(s.size()); }
//			void reserve_maybe(sequence, void *) { }
//
//		public:
//			template <typename T>
//			static handle cast(T &&src, return_value_policy policy, handle parent) {
//				PyMethodDef getitem = {"__getitem__", [&src, &policy, &parent](PyObject* self, PyObject* args) {
//					int data;
//					PyArg_ParseTuple(args, "i", &data);
//					return value_conv::cast(forward_like<T>(src.Data[data]), policy, parent).ptr();
//				} , METH_VARARGS, "bl2sdk.TArray.__getitem__"};
//				PyObject* name = PyString_FromString(getitem.ml_name);
//				PyObject* getitem_func = PyCFunction_NewEx(&getitem, NULL, name);
//				PyTArray *tmp = new PyTArray();
//				object o = help_cast(tmp);
//				PyObject_SetAttr(o.ptr(), name, getitem_func);
//				Py_DECREF(name);
//				return o.release();
//			}
//
//			PYBIND11_TYPE_CASTER(Type, _("TArray<UObject *>"));
//		};
//		template <typename Type> struct type_caster<TArray<Type>> : tarray_pointer_caster<TArray<Type>, Type> { };
//	}
//}


namespace pybind11
{
	namespace detail
	{
		template <typename Type, typename Value> struct tarray_pointer_caster {
			using value_conv = make_caster<Value>;

			bool load(handle src, bool convert) {
				if (!isinstance<sequence>(src))
					return false;
				auto s = reinterpret_borrow<sequence>(src);
				value.Data = (Value *)calloc(s.size(), sizeof(Value));
				size_t i = 0;
				for (auto it : s) {
					value_conv conv;
					if (!conv.load(it, convert))
						return false;
					value.Data[i++] = cast_op<Value &&>(std::move(conv));
				}
				return true;
			}

		private:
			template <typename T = Type,
				enable_if_t<std::is_same<decltype(std::declval<T>().reserve(0)), void>::value, int> = 0>
				void reserve_maybe(sequence s, Type *) { value.reserve(s.size()); }
			void reserve_maybe(sequence, void *) { }

        public:
            template <typename T>
            static handle cast(T &&src, return_value_policy policy, handle parent) {
                if (!std::is_lvalue_reference<T>::value)
                    policy = return_value_policy_override<Value>::policy(policy);
                list l(src.Max);
                for (int index = 0; index < src.Max; index++) {
					auto value_ = none();
					if (index < src.Count) {
						auto value = src.Data[index];
						value_ = reinterpret_steal<object>(value_conv::cast(forward_like<Value>(value), policy, parent));
					}
                    if (!value_)
                    {
                        Logging::LogF("Value is null\n");
                        continue;
                    }
                    auto obj = value_.release().ptr();
                    Py_INCREF(obj);
                    PyList_SET_ITEM(l.ptr(), (ssize_t)index, obj); // steals a reference
                }
                return l.release();
            }

            PYBIND11_TYPE_CASTER(Type, _("TArray[") + value_conv::name + _("]"));
		};
		template <typename Type> struct type_caster<TArray<Type>> : tarray_pointer_caster<TArray<Type>, Type> { };
	}
}




//PYBIND11_MAKE_OPAQUE(TArray<UObject *>);
#include "pydef.h"
//#include "BL2-SDK.h"
