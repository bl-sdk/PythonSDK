#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareInt(py::module &m)
{
    py::class_< UBehavior_CompareInt,  UBehaviorBase   >(m, "UBehavior_CompareInt")
        .def_readwrite("A", &UBehavior_CompareInt::A)
        .def_readwrite("B", &UBehavior_CompareInt::B)
        .def("ApplyBehaviorToContext", &UBehavior_CompareInt::ApplyBehaviorToContext)
          ;
}