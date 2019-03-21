#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareFloat(py::object m)
{
    py::class_< UBehavior_CompareFloat,  UBehaviorBase   >(m, "UBehavior_CompareFloat")
        .def_readwrite("ValueA", &UBehavior_CompareFloat::ValueA)
        .def_readwrite("ValueB", &UBehavior_CompareFloat::ValueB)
        .def("StaticClass", &UBehavior_CompareFloat::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CompareFloat::ApplyBehaviorToContext)
          ;
}