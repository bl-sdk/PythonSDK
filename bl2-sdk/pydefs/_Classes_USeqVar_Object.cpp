#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Object()
{
    py::class_< USeqVar_Object,  USequenceVariable   >("USeqVar_Object")
        .def_readwrite("ObjValue", &USeqVar_Object::ObjValue)
        .def_readwrite("ActorLocation", &USeqVar_Object::ActorLocation)
        .def("StaticClass", &USeqVar_Object::StaticClass, py::return_value_policy::reference)
        .def("SetObjectValue", &USeqVar_Object::SetObjectValue)
        .def("GetObjectValue", &USeqVar_Object::GetObjectValue, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}