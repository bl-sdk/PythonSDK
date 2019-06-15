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

#include "BL2-SDK.h"
#include "gamedefines.h"
#include "logging.h"

namespace BL2SDK
{
	extern void* pTextureFixLocation;
	extern FMalloc** pGMalloc;
}

typedef void *(__thiscall *tMalloc) (struct FMalloc*, unsigned long, unsigned long);
typedef void(__thiscall *tFree) (struct FMalloc*, void*);

#include "BL2SDK/Core/Core_structs.h"
#include "BL2SDK/Core/Core_f_structs.h"
#include "BL2SDK/Core/Core_classes.h"

#include "BL2SDK/Engine/Engine_structs.h"
#include "BL2SDK/Engine/Engine_f_structs.h"
#include "BL2SDK/Engine/Engine_classes.h"

#include "BL2SDK/GameFramework/GameFramework_structs.h"
#include "BL2SDK/GameFramework/GameFramework_f_structs.h"
#include "BL2SDK/GameFramework/GameFramework_classes.h"

#include "BL2SDK/GFxUI/GFxUI_structs.h"
#include "BL2SDK/GFxUI/GFxUI_f_structs.h"
#include "BL2SDK/GFxUI/GFxUI_classes.h"

#include "BL2SDK/GearboxFramework/GearboxFramework_structs.h"
#include "BL2SDK/GearboxFramework/GearboxFramework_f_structs.h"
#include "BL2SDK/GearboxFramework/GearboxFramework_classes.h"

#include "BL2SDK/IpDrv/IpDrv_structs.h"
#include "BL2SDK/IpDrv/IpDrv_f_structs.h"
#include "BL2SDK/IpDrv/IpDrv_classes.h"

#include "BL2SDK/OnlineSubsystemSteamworks/OnlineSubsystemSteamworks_structs.h"
#include "BL2SDK/OnlineSubsystemSteamworks/OnlineSubsystemSteamworks_f_structs.h"
#include "BL2SDK/OnlineSubsystemSteamworks/OnlineSubsystemSteamworks_classes.h"

#include "BL2SDK/WillowGame/WillowGame_structs.h"
#include "BL2SDK/WillowGame/WillowGame_f_structs.h"
#include "BL2SDK/WillowGame/WillowGame_classes.h"

#include "BL2SDK/WinDrv/WinDrv_structs.h"
#include "BL2SDK/WinDrv/WinDrv_f_structs.h"
#include "BL2SDK/WinDrv/WinDrv_classes.h"

#include "BL2SDK/XAudio2/XAudio2_structs.h"
#include "BL2SDK/XAudio2/XAudio2_f_structs.h"
#include "BL2SDK/XAudio2/XAudio2_classes.h"

#include "BL2SDK/AkAudio/AkAudio_structs.h"
#include "BL2SDK/AkAudio/AkAudio_f_structs.h"
#include "BL2SDK/AkAudio/AkAudio_classes.h"

#include "TypeMap.h"

namespace pybind11 {
	template <typename itype> struct polymorphic_type_hook<itype, detail::enable_if_t<std::is_base_of<UObject, itype>::value>>
	{
		static const void *get(const itype *src, const std::type_info*& type) {
			if (src) {
				if (((UObject *)src)->Class) {
					std::string type_name = ((UObject *)src)->Class->GetName();
					if (uobject_type_map.count(type_name))
						type = uobject_type_map[type_name];
				}
				return src;
			}
			type = nullptr;
			return dynamic_cast<const void*>(src);
		}
	};
}

typedef struct {
	PyObject_VAR_HEAD
		PyObject **ob_item;
	Py_ssize_t allocated;
	PyObject *dict;
} PyTArrayObject;

static PyGetSetDef getset[] = {
	{const_cast<char*>("__dict__"), pybind11::detail::pybind11_get_dict, pybind11::detail::pybind11_set_dict, nullptr, nullptr},
	{nullptr, nullptr, nullptr, nullptr, nullptr}
};

static int tarray_traverse(PyTArrayObject *o, visitproc visit, void *arg)
{
	Py_ssize_t i;

	for (i = Py_SIZE(o); --i >= 0; )
		Py_VISIT(o->ob_item[i]);
	return pybind11::detail::pybind11_traverse((PyObject *)o, visit, arg);
}

static int tarray_clear(PyTArrayObject *a)
{
	Py_ssize_t i;
	PyObject **item = a->ob_item;
	if (item != NULL) {
		/* Because XDECREF can recursively invoke operations on
		   this list, we make it empty first. */
		i = Py_SIZE(a);
		Py_SIZE(a) = 0;
		a->ob_item = NULL;
		a->allocated = 0;
		while (--i >= 0) {
			Py_XDECREF(item[i]);
		}
		PyMem_FREE(item);
	}
	return pybind11::detail::pybind11_clear((PyObject *)a);
}

static void tarray_dealloc(PyTArrayObject *op)
{
	Py_ssize_t i;
	PyObject_GC_UnTrack(op);
	Py_TRASHCAN_SAFE_BEGIN(op)
		if (op->ob_item != NULL) {
			i = Py_SIZE(op);
			while (--i >= 0) {
				Py_XDECREF(op->ob_item[i]);
			}
			PyMem_FREE(op->ob_item);
		}
	PyObject **dict_ptr = _PyObject_GetDictPtr((PyObject *)op);
	if (dict_ptr)
		Py_CLEAR(*dict_ptr);
	Py_TYPE(op)->tp_free((PyObject *)op);
	Py_TRASHCAN_SAFE_END(op)
}

static void *get_object_ptr(const void *ptr) {
	std::unordered_multimap<const void *, pybind11::detail::instance *>::iterator it;
	for (it = pybind11::detail::get_internals().registered_instances.begin(); it != pybind11::detail::get_internals().registered_instances.end(); ++it)
		if ((void *)(*it).second == ptr)
			return (void *)(*it).first;
	return 0;
}

static PyObject *tarray_setitem(PyObject* self, PyObject* args, PyObject* kwds) {
	static const char *keywordList[] = { "key", "value", NULL };
	int key;
	PyObject *value;
	if (!PyArg_ParseTupleAndKeywords(args, kwds, "i|O", const_cast<char**>(keywordList), &key, &value))
		return 0;
	void *addr = get_object_ptr((void *)value);
	if (!addr) {
		Logging::LogF("Could not find base address to overwrite");
		return Py_BuildValue("");
	}
	ssize_t obj_size = (ssize_t)PyLong_AsUnsignedLong(PyObject_GetAttrString(self, "__tarray_obj_size__"));
	void *data_addr = (void *)(PyLong_AsUnsignedLong(PyObject_GetAttrString(self, "__tarray_data_addr__")) + key * obj_size);
	PyObject *is_ptr = PyObject_GetAttrString(self, "__tarray_is_ptr__");
	memcpy(data_addr, is_ptr == Py_True ? &addr : addr, obj_size);
	return Py_BuildValue("");
}

static PyMethodDef tarray_methods[] = {
	{"Set", (PyCFunction)tarray_setitem, METH_VARARGS | METH_KEYWORDS | METH_COEXIST, "x.Set(index, value)"},
	{NULL,              NULL}           /* sentinel */
};

static PyTypeObject PyTArrayType = {
	PyVarObject_HEAD_INIT(NULL, 0)
	"bl2sdk.TArray",										/*tp_name*/
	sizeof(PyTArrayObject),									/*tp_basicsize*/
	PyList_Type.tp_itemsize,                                /*tp_itemsize*/
	(destructor)tarray_dealloc,					   			/*tp_dealloc*/
	PyList_Type.tp_print,                                   /*tp_print*/
	PyList_Type.tp_getattr,									/*tp_getattr*/
	PyList_Type.tp_setattr,									/*tp_setattr*/
	PyList_Type.tp_as_async,								/*tp_as_async*/
	PyList_Type.tp_repr,								    /*tp_repr*/
	PyList_Type.tp_as_number,							    /*tp_as_number*/
	PyList_Type.tp_as_sequence,								/*tp_as_sequence*/
	PyList_Type.tp_as_mapping,								/*tp_as_mapping*/
	PyList_Type.tp_hash,									/*tp_hash */
	PyList_Type.tp_call,									/*tp_call*/
	PyList_Type.tp_str,										/*tp_str*/
	PyList_Type.tp_getattro,								/*tp_getattro*/
	PyList_Type.tp_setattro,								/*tp_setattro*/
	PyList_Type.tp_as_buffer,								/*tp_as_buffer*/
	PyList_Type.tp_flags,									/*tp_flags*/
	PyList_Type.tp_doc,										/*tp_doc*/
	(traverseproc)tarray_traverse,							/*tp_traverse*/
	(inquiry)tarray_clear,									/*tp_clear*/
	PyList_Type.tp_richcompare,								/*tp_richcompare*/
	PyList_Type.tp_weaklistoffset,							/*tp_weaklistoffset*/
	PyList_Type.tp_iter,									/*tp_iter*/
	PyList_Type.tp_iternext,								/*tp_iternext*/
	tarray_methods,											/*tp_methods*/
	PyList_Type.tp_members,									/*tp_members*/
	getset,													/*tp_getset*/
	PyList_Type.tp_base,									/*tp_base*/
	0,														/*tp_dict*/
	PyList_Type.tp_descr_get,								/*tp_descr_get*/
	PyList_Type.tp_descr_set,								/*tp_descr_set*/
	offsetof(PyTArrayObject, dict),							/*tp_dictoffset*/
	PyList_Type.tp_init,									/*tp_init*/
	PyList_Type.tp_alloc,									/*tp_alloc*/
	PyList_Type.tp_new,			       						/*tp_new*/
	PyList_Type.tp_free,			       					/*tp_free*/
	PyList_Type.tp_is_gc,			       					/*tp_is_gc*/
	PyList_Type.tp_bases,			       					/*tp_bases*/
	PyList_Type.tp_mro,			       						/*tp_mro*/
	PyList_Type.tp_cache,			       					/*tp_cache*/
	PyList_Type.tp_subclasses,			       				/*tp_subclasses*/
	PyList_Type.tp_weaklist,			       				/*tp_weaklist*/
	PyList_Type.tp_del,			       						/*tp_del*/
	PyList_Type.tp_version_tag,			       				/*tp_version_tag*/
	PyList_Type.tp_finalize,			       				/*tp_finalize*/
};

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
				value.Data = (Value *)((tMalloc)BL2SDK::pGMalloc[0]->VfTable[1])(BL2SDK::pGMalloc[0], sizeof(Value) * s.size(), 8);
				value.Count = s.size();
				value.Max = s.size();
				int x = 0;
				for (auto it : s) {
					value_conv conv;
					if (!conv.load(it, convert))
						return false;
					value.Data[x] = cast_op<Value &&>(std::move(conv));
					x++;
				}
				return true;
			}

		private:

		public:
			template <typename T>
			static handle cast(T &&src, return_value_policy policy, handle parent) {
				PyTArrayObject *o = PyObject_GC_New(PyTArrayObject, &PyTArrayType);
				o->dict = nullptr;
				o->ob_item = (PyObject **)PyMem_Calloc(src.Count, sizeof(PyObject *));
				Py_SIZE(o) = src.Count;
				o->allocated = src.Count;
				for (size_t index = 0; index < src.Count; index++) {
					auto value_ = none();
					if (index < src.Count) {
						auto value = src.Data[index];
						value_ = reinterpret_steal<object>(value_conv::cast(forward_like<Value>(value), policy, parent));
					}
					if (!value_)
						continue;
					auto obj = value_.release().ptr();
					PyList_SET_ITEM(o, (ssize_t)index, obj);
				}
				PyObject *is_ptr = Py_False;
				if (std::is_pointer<Value>::value)
					is_ptr = Py_True;
				PyObject_GenericSetAttr((PyObject *)o, PyUnicode_FromString("__tarray_data_addr__"), PyLong_FromUnsignedLong((unsigned long)src.Data));
				PyObject_GenericSetAttr((PyObject *)o, PyUnicode_FromString("__tarray_obj_size__"), PyLong_FromUnsignedLong((unsigned long)sizeof(Value)));
				PyObject_GenericSetAttr((PyObject *)o, PyUnicode_FromString("__tarray_count__"), PyLong_FromUnsignedLong((unsigned long)src.Count));
				PyObject_GenericSetAttr((PyObject *)o, PyUnicode_FromString("__tarray_max__"), PyLong_FromUnsignedLong((unsigned long)src.Max));
				PyObject_GenericSetAttr((PyObject *)o, PyUnicode_FromString("__tarray_is_ptr__"), is_ptr);
				PyObject_GC_Track(o);
				return (PyObject *)o;
			}

			PYBIND11_TYPE_CASTER(Type, _("TArray<") + value_conv::name + _(">"));
		};
		template <typename Type> struct type_caster<TArray<Type>> : tarray_pointer_caster<TArray<Type>, Type> { };
	}
}

namespace pybind11 {
	namespace detail {
		template <> struct type_caster<struct FString> {
		public:
			PYBIND11_TYPE_CASTER(FString, _("FString"));
			bool load(handle src, bool) {
				if (!isinstance<sequence>(src))
					return false;
				PyObject *source = src.ptr();
				const char *tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = FString(tmp);
				return true;
			}
			static handle cast(FString src, return_value_policy /* policy */, handle /* parent */) {
				Logging::LogD("FString cast %p %d\n", src.Data, src.Count);
				if (src.Data && src.Count)
					return PyUnicode_FromWideChar(src.Data, src.Count - 1);
				return py::none();
			}
		};
	}
}

namespace pybind11 {
	namespace detail {
		template <> struct type_caster<UClass *> {
			using value_conv = make_caster<UObject *>;
		public:
			PYBIND11_TYPE_CASTER(UClass *, _("UClass"));
			bool load(handle src, bool) {
				if (!isinstance<sequence>(src))
					return false;
				PyObject *source = src.ptr();
				const char *tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = UObject::FindClass(tmp, false);
				return value != nullptr;
			}
			static handle cast(UClass *src, return_value_policy policy, handle parent) {
				return value_conv::cast(forward_like<UObject *>(src), policy, parent);
			}
		};
	}
}


namespace pybind11 {
	namespace detail {
		template <> struct type_caster<struct FName> {
		public:
			PYBIND11_TYPE_CASTER(FName, _("FName"));
			bool load(handle src, bool) {
				if (!isinstance<sequence>(src))
					return false;
				PyObject *source = src.ptr();
				const char *tmp = PyUnicode_AsUTF8AndSize(source, nullptr);
				if (!tmp)
					return false;
				value = FName(tmp);
				return true;
			}
			static handle cast(FName src, return_value_policy /* policy */, handle /* parent */) {
				return PyUnicode_FromString(src.GetName());
			}
		};
	}
}

#include "pydef.h"
