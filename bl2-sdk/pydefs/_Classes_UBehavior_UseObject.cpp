#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UseObject()
{
    py::class_< UBehavior_UseObject,  UBehaviorBase   >("UBehavior_UseObject")
        .def_readwrite("UseType", &UBehavior_UseObject::UseType)
        .def_readwrite("User", &UBehavior_UseObject::User)
        .def("StaticClass", &UBehavior_UseObject::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UseObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}