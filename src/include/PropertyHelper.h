#pragma once
#ifndef PROPERTY_HELPER_H
#define PROPERTY_HELPER_H

#include <stdafx.h>

#pragma region Forward declarations

struct UProperty;
struct UStructProperty;
struct UStrProperty;
struct UObjectProperty;
#ifdef UE3
struct UComponentProperty;
#endif
struct UClassProperty;
struct UNameProperty;
struct UIntProperty;
struct UInterfaceProperty;
struct UFloatProperty;
struct UDelegateProperty;
struct UByteProperty;
struct UBoolProperty;
struct UArrayProperty;
#ifdef UE4
struct UTextProperty;
struct UWeakObjectProperty;
struct USoftObjectProperty;
struct USoftClassProperty;
struct UUInt64Property;
struct UUInt32Property;
struct UUInt16Property;
struct UInt8Property;
struct UInt64Property;
struct UInt16Property;
struct UDoubleProperty;

template <typename T>
struct FSoftObject;
#endif

#pragma endregion

/**
 * @brief Helper struct storing info about unreal properties.
 *
 * @tparam T The property's class.
 */
template <typename T>
struct PropInfo {
	/// The type of the property's value.
	typedef T type;
	/// The UE name of the property class - generally just without the `U`.
	static inline const char* class_name;
};

#pragma region PropInfo defines

template <>
struct PropInfo<UStructProperty> {
	typedef struct FStruct type;
	static inline const char* class_name = "StructProperty";
};

template <>
struct PropInfo<UStrProperty> {
	typedef struct FString* type;
	static inline const char* class_name = "StrProperty";
};

template <>
struct PropInfo<UObjectProperty> {
	typedef struct UObject* type;
	static inline const char* class_name = "ObjectProperty";
};

#ifdef UE3
template <>
struct PropInfo<UComponentProperty> {
	typedef struct UComponent* type;
	static inline const char* class_name = "ComponentProperty";
};
#endif

template <>
struct PropInfo<UClassProperty> {
	typedef struct UClass* type;
	static inline const char* class_name = "ClassProperty";
};

template <>
struct PropInfo<UNameProperty> {
	typedef struct FName* type;
	static inline const char* class_name = "NameProperty";
};

// TODO: UMapProperty

template <>
struct PropInfo<UIntProperty> {
	typedef int32_t type;
	static inline const char* class_name = "IntProperty";
};

// TODO: IntAttributeProperty

template <>
struct PropInfo<UInterfaceProperty> {
	typedef struct FScriptInterface* type;
	static inline const char* class_name = "InterfaceProperty";
};

template <>
struct PropInfo<UFloatProperty> {
	typedef float_t type;
	static inline const char* class_name = "FloatProperty";
};

// TODO: FloatAttributeProperty

template <>
struct PropInfo<UDelegateProperty> {
	typedef struct FScriptDelegate* type;
	static inline const char* class_name = "DelegateProperty";
};

template <>
struct PropInfo<UByteProperty> {
	typedef uint8_t type;
	static inline const char* class_name = "ByteProperty";
};

// TODO: ByteAttributeProperty

template <>
struct PropInfo<UBoolProperty> {
	typedef bool type;
	static inline const char* class_name = "BoolProperty";
};

template <>
struct PropInfo<UArrayProperty> {
	typedef struct FArray type;
	static inline const char* class_name = "ArrayProperty";
};

#ifdef UE4
template <>
struct PropInfo<UTextProperty> {
	typedef std::wstring type;
	static inline const char* class_name = "TextProperty";
};

// TODO: USetProperty

// TODO: UObjectPropertyBase??

template <>
struct PropInfo<UWeakObjectProperty> {
	typedef struct UObject* type;
	static inline const char* class_name = "WeakObjectProperty";
};

template <>
struct PropInfo<USoftObjectProperty> {
	typedef struct FSoftObject<struct UObject> type;
	static inline const char* class_name = "SoftObjectProperty";
};

template <>
struct PropInfo<USoftClassProperty> {
	typedef struct FSoftObject<struct UClass> type;
	static inline const char* class_name = "SoftClassProperty";
};

// TODO: ULazyObjectProperty

// TODO: UNumericProperty??

template <>
struct PropInfo<UUInt64Property> {
	typedef uint64_t type;
	static inline const char* class_name = "UInt64Property";
};

template <>
struct PropInfo<UUInt32Property> {
	typedef uint32_t type;
	static inline const char* class_name = "UInt32Property";
};

template <>
struct PropInfo<UUInt16Property> {
	typedef uint16_t type;
	static inline const char* class_name = "UInt16Property";
};

template <>
struct PropInfo<UInt8Property> {
	typedef int8_t type;
	static inline const char* class_name = "Int8Property";
};

template <>
struct PropInfo<UInt64Property> {
	typedef int64_t type;
	static inline const char* class_name = "Int64Property";
};

template <>
struct PropInfo<UInt16Property> {
	typedef int16_t type;
	static inline const char* class_name = "Int16Property";
};

template <>
struct PropInfo<UDoubleProperty> {
	typedef double_t type;
	static inline const char* class_name = "DoubleProperty";
};

// TODO: UMulticastDelegateProperty

// TODO: UEnumProperty
#endif

#pragma endregion

struct PropertyHelper {
   private:
	/**
	 * @brief Gets the address a property is stored at.
	 *
	 * @param prop The property object to lookup.
	 * @param idx The fixed array index to check.
	 * @return A pointer to the location the property is stored
	 */
	void* GetPropertyAddress(UProperty* prop, size_t idx);

   public:
	/**
	 * @brief Reads a property off the object.
	 *
	 * @tparam T The property type.
	 * @param prop The property object to lookup.
	 * @param idx The fixed array index to check.
	 * @return The property's value.
	 */
	template <typename T>
	typename PropInfo<T>::type ReadProperty(T* prop, size_t idx);

	/**
	 * @brief Reads a property off the object as a fixed-size array.
	 *
	 * @tparam T The property type.
	 * @param prop The property object to lookup.
	 * @return A vector of the property's values.
	 */
	template <typename T>
	std::vector<typename PropInfo<T>::type> ReadFixedArrayProperty(T* prop) {
		std::vector<typename PropInfo<T>::type> vec(prop->ArrayDim);
		for (size_t i = 0; i < prop->ArrayDim; i++) {
			vec[i] = this->ReadProperty<T>(prop, i);
		}
		return vec;
	}

	/**
	 * @brief Writes a value to an object property.
	 *
	 * @tparam T The property type.
	 * @param prop The property object to lookup.
	 * @param idx The fixed array index to write to.
	 * @param val The value to write.
	 */
	template <typename T>
	void WriteProperty(T* prop, size_t idx, typename PropInfo<T>::type val);

	/**
	 * @brief Writes a fixed-sized array worth of values to an object property.
	 *
	 * @tparam T The property type.
	 * @param prop The property object to lookup.
	 * @param arr The array of values to write.
	 */
	template <typename T>
	void WriteFixedArrayProperty(T* prop, std::vector<typename PropInfo<T>::type> arr) {
		auto size = arr.size();
		if (size > (size_t)prop->ArrayDim) {
			throw std::length_error(
				Util::Format("Sequence is too long, %s supports max of %d values!", Prop->GetName(),
							 Prop->ArrayDim));
		}

		for (size_t i = 0; i < size; i++) {
			this->WriteProperty(prop, i, arr[i]);
		}

		typename PropInfo<T>::type defaultVal{};
		for (size_t i = size; i < (size_t)Prop->ArrayDim; i++) {
			this->WriteProperty(prop, i, defaultVal);
		}
	}
};

#endif /* PROPERTY_HELPER_H */
