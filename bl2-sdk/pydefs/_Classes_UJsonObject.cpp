#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UJsonObject(py::module &m)
{
    py::class_< UJsonObject,  UObject   >(m, "UJsonObject")
        .def_readwrite("ValueMap", &UJsonObject::ValueMap)
        .def_readwrite("ObjectMap", &UJsonObject::ObjectMap)
        .def_readwrite("ValueArray", &UJsonObject::ValueArray)
        .def_readwrite("ObjectArray", &UJsonObject::ObjectArray)
        .def("StaticClass", &UJsonObject::StaticClass, py::return_value_policy::reference)
        .def("DecodeJson", &UJsonObject::DecodeJson, py::return_value_policy::reference)
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
        .def("GetObject", &UJsonObject::GetObject, py::return_value_policy::reference)
          ;
}