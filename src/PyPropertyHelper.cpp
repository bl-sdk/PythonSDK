#include <stdafx.h>

#ifndef UE4
#include "UnrealEngine/Core/UE3/Core_classes.h"
#include "UnrealEngine/Engine/UE3/Engine_classes.h"
#include "UnrealEngine/UE3Defines.h"
#else
#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"
#include "UnrealEngine/Engine/UE4/UE4EngineClasses.h"
#include "UnrealEngine/UE4Defines.h"
#endif

#include "PropertyHelper.h"

py::object PropertyHelper::GetPyProperty(UProperty* prop) {
	LOG(INTERNAL, "GetPyProperty '%s' (offset 0x%x, arraydim %d) (prop at 0x%p) on 0x%p\n",
		prop->GetFullName().c_str(), prop->Offset_Internal, prop->ArrayDim, prop, this);

	auto class_name = (std::string)prop->Class->Name;
	py::object (*getter)(PropertyHelper*, UProperty*, size_t);

	if (class_name == PropInfo<UStructProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UStructProperty>(static_cast<UStructProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UStrProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(obj->ReadProperty<UStrProperty>(static_cast<UStrProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UObjectProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UObjectProperty>(static_cast<UObjectProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UClassProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UClassProperty>(static_cast<UClassProperty*>(prop), idx));
		};
	}
#ifdef UE3
	else if (class_name == PropInfo<UComponentProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UComponentProperty>(static_cast<UComponentProperty*>(prop), idx));
		};
	}
#endif
	else if (class_name == PropInfo<UNameProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UNameProperty>(static_cast<UNameProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UIntProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(obj->ReadProperty<UIntProperty>(static_cast<UIntProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UInterfaceProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UInterfaceProperty>(static_cast<UInterfaceProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UFloatProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UFloatProperty>(static_cast<UFloatProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UDelegateProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UDelegateProperty>(static_cast<UDelegateProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UByteProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UByteProperty>(static_cast<UByteProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UBoolProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UBoolProperty>(static_cast<UBoolProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UArrayProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UArrayProperty>(static_cast<UArrayProperty*>(prop), idx));
		};
	}
#ifdef UE4
	else if (class_name == PropInfo<UTextProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UTextProperty>(static_cast<UTextProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UWeakObjectProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(obj->ReadProperty<UWeakObjectProperty>(
				static_cast<UWeakObjectProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<USoftObjectProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(obj->ReadProperty<USoftObjectProperty>(
				static_cast<USoftObjectProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<USoftClassProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<USoftClassProperty>(static_cast<USoftClassProperty*>(prop), idx));
		};
	} else if (class_name == PropInfo<UUInt64Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UUInt64Property>(static_cast<UUInt64Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UUInt32Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UUInt32Property>(static_cast<UUInt32Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UUInt16Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UUInt16Property>(static_cast<UUInt16Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UInt8Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UInt8Property>(static_cast<UInt8Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UInt64Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UInt64Property>(static_cast<UInt64Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UInt16Property>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UInt16Property>(static_cast<UInt16Property*>(prop), idx));
		};
	} else if (class_name == PropInfo<UDoubleProperty>::class_name) {
		getter = [](PropertyHelper* obj, UProperty* prop, size_t idx) {
			return py::cast(
				obj->ReadProperty<UDoubleProperty>(static_cast<UDoubleProperty*>(prop), idx));
		};
	}
#endif
	else {
		throw py::type_error("Property type '" + class_name + "' not implemented!");
	}

	if (prop->ArrayDim == 1) {
		return getter(this, prop, 0);
	}

	auto list = py::list();
	for (size_t i = 0; i < prop->ArrayDim; i++) {
		list.append(getter(this, prop, i));
	}

	return py::tuple(list);
}

/**
 * @brief Sets a struct property on an object from a python tuple.
 *
 * @param obj The object to set the value on.
 * @param prop The property object to set.
 * @param idx The fixed array index to set.
 * @param val The value to set.
 */
static void SetStructProperty(PropertyHelper* obj,
							  UStructProperty* prop,
							  size_t idx,
							  py::object val) {
	if (!py::isinstance<py::tuple>(val)) {
		throw py::type_error("Got unexpected type, expected tuple!");
	}
	const py::tuple tup = py::reinterpret_borrow<py::tuple>(val);
	UStruct* struct_ = prop->GetStruct();

	// Validate the amount of fields in the tuple matches the struct
	// Need to do this before we actually modify anything
	size_t expected_count = 0;
	for (auto* child = struct_->Children; child; child = child->Next) {
		expected_count++;
	}

	if (tup.size() != expected_count) {
		throw py::value_error(
			Util::Format("Tuple does not have the same amount of fields as struct, expected %d",
						 expected_count));
	}

	PropertyHelper* inner_obj =
		reinterpret_cast<PropertyHelper*>(obj->GetPropertyAddress(prop, idx));
	size_t tup_idx = 0;
	for (auto* child = struct_->Children; child; child = child->Next) {
		inner_obj->SetPyProperty(reinterpret_cast<UProperty*>(child), tup[tup_idx++]);
	}
}

/**
 * @brief Sets an array property on an object from a python array.
 *
 * @param obj The object to set the value on.
 * @param prop The property object to set.
 * @param idx The fixed array index to set.
 * @param val The value to set.
 */
static void SetArrayProperty(PropertyHelper* obj,
							 UArrayProperty* prop,
							 size_t idx,
							 py::object val) {
	if (!py::isinstance<py::sequence>(val)) {
		throw py::type_error("Got unexpected type, expected sequence!");
	}
	const auto seq = py::reinterpret_borrow<py::sequence>(val);
	const auto current_array =
		reinterpret_cast<TArray<uint8_t>*>(obj->GetPropertyAddress(prop, idx));
	size_t element_size = prop->GetInner()->ElementSize;

	if (seq.size() > current_array->Count) {
// TODO: Test this GMalloc implementation & array resizing
#ifndef UE4
		uint8_t* data = static_cast<uint8_t*>(static_cast<tMalloc>(UnrealSDK::pGMalloc[0][0][1])(
			UnrealSDK::pGMalloc[0], element_size * seq.size(), 8));
#else
		uint8_t* data = static_cast<uint8_t*>(
			static_cast<tMalloc>(UnrealSDK::pGMalloc)(element_size * seq.size(), 8));
#endif

		memset(data, 0, element_size * seq.size());
		current_array->Data = data;
		current_array->Max = seq.size();
	}

	auto inner_prop = prop->GetInner();

	current_array->Count = seq.size();
	size_t array_idx = 0;
	for (const auto it : seq) {
		auto inner_obj =
			reinterpret_cast<PropertyHelper*>(current_array->Data + (element_size * array_idx++));
		inner_obj->SetPyProperty(inner_prop, py::reinterpret_borrow<py::object>(it));
	}
}

void PropertyHelper::SetPyProperty(UProperty* prop, py::object val) {
	LOG(INTERNAL, "GetPyProperty '%s' (offset 0x%x, arraydim %d) (Prop at 0x%p) on 0x%p\n",
		prop->GetFullName().c_str(), prop->Offset_Internal, prop->ArrayDim, prop, this);

	auto class_name = (std::string)prop->Class->Name;
	void (*setter)(PropertyHelper*, UProperty*, size_t, py::object);

	if (class_name == PropInfo<UStructProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			SetStructProperty(obj, static_cast<UStructProperty*>(prop), idx, val);
		};
	} else if (class_name == PropInfo<UStrProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			FString str(val.cast<std::string>().c_str());
			obj->WriteProperty<UStrProperty>(static_cast<UStrProperty*>(prop), idx, &str);
		};
	} else if (class_name == PropInfo<UObjectProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UObjectProperty>(
				static_cast<UObjectProperty*>(prop), idx,
				val.cast<typename PropInfo<UObjectProperty>::type>());
		};
	}
#ifdef UE3
	else if (class_name == PropInfo<UComponentProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UComponentProperty>(
				static_cast<UComponentProperty*>(prop), idx,
				val.cast<typename PropInfo<UComponentProperty>::type>());
		};
	}
#endif
	else if (class_name == PropInfo<UClassProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UClassProperty>(static_cast<UClassProperty*>(prop), idx,
											   val.cast<typename PropInfo<UClassProperty>::type>());
		};
	} else if (class_name == PropInfo<UNameProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			FName name(val.cast<std::string>().c_str());
			obj->WriteProperty<UNameProperty>(static_cast<UNameProperty*>(prop), idx, &name);
		};
	} else if (class_name == PropInfo<UIntProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UIntProperty>(static_cast<UIntProperty*>(prop), idx,
											 val.cast<typename PropInfo<UIntProperty>::type>());
		};
	} else if (class_name == PropInfo<UInterfaceProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UInterfaceProperty>(
				static_cast<UInterfaceProperty*>(prop), idx,
				val.cast<typename PropInfo<UInterfaceProperty>::type>());
		};
	} else if (class_name == PropInfo<UFloatProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UFloatProperty>(static_cast<UFloatProperty*>(prop), idx,
											   val.cast<typename PropInfo<UFloatProperty>::type>());
		};
	} else if (class_name == PropInfo<UDelegateProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UDelegateProperty>(
				static_cast<UDelegateProperty*>(prop), idx,
				val.cast<typename PropInfo<UDelegateProperty>::type>());
		};
	} else if (class_name == PropInfo<UByteProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UByteProperty>(static_cast<UByteProperty*>(prop), idx,
											  val.cast<typename PropInfo<UByteProperty>::type>());
		};
	} else if (class_name == PropInfo<UBoolProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UBoolProperty>(static_cast<UBoolProperty*>(prop), idx,
											  val.cast<typename PropInfo<UBoolProperty>::type>());
		};
	} else if (class_name == PropInfo<UArrayProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			SetArrayProperty(obj, static_cast<UArrayProperty*>(prop), idx, val);
		};
	}
#ifdef UE4
	else if (class_name == PropInfo<UTextProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UTextProperty>(static_cast<UTextProperty*>(prop), idx,
											  val.cast<typename PropInfo<UTextProperty>::type>());
		};
	} else if (class_name == PropInfo<UWeakObjectProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UWeakObjectProperty>(
				static_cast<UWeakObjectProperty*>(prop), idx,
				val.cast<typename PropInfo<UWeakObjectProperty>::type>());
		};
	} else if (class_name == PropInfo<USoftObjectProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<USoftObjectProperty>(
				static_cast<USoftObjectProperty*>(prop), idx,
				val.cast<typename PropInfo<USoftObjectProperty>::type>());
		};
	} else if (class_name == PropInfo<USoftClassProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<USoftClassProperty>(
				static_cast<USoftClassProperty*>(prop), idx,
				val.cast<typename PropInfo<USoftClassProperty>::type>());
		};
	} else if (class_name == PropInfo<UUInt64Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UUInt64Property>(
				static_cast<UUInt64Property*>(prop), idx,
				val.cast<typename PropInfo<UUInt64Property>::type>());
		};
	} else if (class_name == PropInfo<UUInt32Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UUInt32Property>(
				static_cast<UUInt32Property*>(prop), idx,
				val.cast<typename PropInfo<UUInt32Property>::type>());
		};
	} else if (class_name == PropInfo<UUInt16Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UUInt16Property>(
				static_cast<UUInt16Property*>(prop), idx,
				val.cast<typename PropInfo<UUInt16Property>::type>());
		};
	} else if (class_name == PropInfo<UInt8Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UInt8Property>(static_cast<UInt8Property*>(prop), idx,
											  val.cast<typename PropInfo<UInt8Property>::type>());
		};
	} else if (class_name == PropInfo<UInt64Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UInt64Property>(static_cast<UInt64Property*>(prop), idx,
											   val.cast<typename PropInfo<UInt64Property>::type>());
		};
	} else if (class_name == PropInfo<UInt16Property>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UInt16Property>(static_cast<UInt16Property*>(prop), idx,
											   val.cast<typename PropInfo<UInt16Property>::type>());
		};
	} else if (class_name == PropInfo<UDoubleProperty>::class_name) {
		setter = [](PropertyHelper* obj, UProperty* prop, size_t idx, py::object val) {
			obj->WriteProperty<UDoubleProperty>(
				static_cast<UDoubleProperty*>(prop), idx,
				val.cast<typename PropInfo<UDoubleProperty>::type>());
		};
	}
#endif
	else {
		throw py::type_error("Property type '" + class_name + "' not implemented!");
	}

	if (prop->ArrayDim == 1) {
		setter(this, prop, 0, val);
		return;
	}

	if (!py::isinstance<py::sequence>(val)) {
		throw py::type_error("Got unexpected type, expected sequence!");
	}

	auto seq = py::reinterpret_borrow<py::sequence>(val);
	auto size = seq.size();

	if (size > (size_t)prop->ArrayDim) {
		throw py::type_error(Util::Format("Sequence is too long, %s supports max of %d values!",
										  prop->GetName(), prop->ArrayDim));
	}

	for (size_t i = 0; i < size; i++) {
		setter(this, prop, i, seq[i]);
	}
	for (size_t i = size; i < (size_t)prop->ArrayDim; i++) {
		setter(this, prop, i, py::none());
	}
}

py::object UObject::GetPyProperty(const std::string& name) {
	auto prop = static_cast<UProperty*>(this->Class->FindChildByName(FName(name)));
	if (prop == nullptr) {
		throw py::attribute_error("Could not find property '" + name + "'!");
	}

	return reinterpret_cast<PropertyHelper*>(this)->GetPyProperty(prop);
}

py::object FStruct::GetPyProperty(const std::string& name) {
	auto prop = static_cast<UProperty*>(this->structType->FindChildByName(FName(name)));
	if (prop == nullptr) {
		throw py::attribute_error("Could not find property '" + name + "'!");
	}

	return reinterpret_cast<PropertyHelper*>(this)->GetPyProperty(prop);
}

void UObject::SetPyProperty(const std::string& name, py::object val) {
	auto prop = static_cast<UProperty*>(this->Class->FindChildByName(FName(name)));
	if (prop == nullptr) {
		throw py::attribute_error("Could not find property '" + name + "'!");
	}

	reinterpret_cast<PropertyHelper*>(this)->SetPyProperty(prop, val);
}

void FStruct::SetPyProperty(const std::string& name, py::object val) {
	auto prop = static_cast<UProperty*>(this->structType->FindChildByName(FName(name)));
	if (prop == nullptr) {
		throw py::attribute_error("Could not find property '" + name + "'!");
	}

	reinterpret_cast<PropertyHelper*>(this)->SetPyProperty(prop, val);
}
