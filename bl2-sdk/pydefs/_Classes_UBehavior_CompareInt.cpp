#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareInt()
{
    py::class_< UBehavior_CompareInt,  UBehaviorBase   >("UBehavior_CompareInt")
        .def_readwrite("A", &UBehavior_CompareInt::A)
        .def_readwrite("B", &UBehavior_CompareInt::B)
        .def("StaticClass", &UBehavior_CompareInt::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CompareInt::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}