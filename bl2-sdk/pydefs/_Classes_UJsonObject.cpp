#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UJsonObject()
{
    class_< UJsonObject, bases< UObject >  , boost::noncopyable>("UJsonObject", no_init)
        .def_readwrite("ValueMap", &UJsonObject::ValueMap)
        .def_readwrite("ObjectMap", &UJsonObject::ObjectMap)
        .def_readwrite("ValueArray", &UJsonObject::ValueArray)
        .def_readwrite("ObjectArray", &UJsonObject::ObjectArray)
        .def("StaticClass", &UJsonObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("DecodeJson", &UJsonObject::DecodeJson, return_value_policy< reference_existing_object >())
        .def("EncodeJson", &UJsonObject::EncodeJson)
        .def("SetBoolValue", &UJsonObject::SetBoolValue)
        .def("SetFloatValue", &UJsonObject::SetFloatValue)
        .def("SetIntValue", &UJsonObject::SetIntValue)
        .def("SetStringValue", &UJsonObject::SetStringValue)
        .def("SetObject", &UJsonObject::SetObject)
        .def("GetBoolValue", &UJsonObject::GetBoolValue)
        .def("GetFloatValue", &UJsonObject::GetFloatValue)
        .def("GetIntValue", &UJsonObject::GetIntValue)
        .def("GetStringValue", &UJsonObject::GetStringValue)
        .def("GetObject", &UJsonObject::GetObject, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}