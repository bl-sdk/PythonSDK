#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareObject()
{
    py::class_< UBehavior_CompareObject,  UBehaviorBase   >("UBehavior_CompareObject")
        .def_readwrite("ObjectA", &UBehavior_CompareObject::ObjectA)
        .def_readwrite("ObjectB", &UBehavior_CompareObject::ObjectB)
        .def("StaticClass", &UBehavior_CompareObject::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CompareObject::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}