#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Conditional(py::object m)
{
    py::class_< UBehavior_Conditional,  UBehaviorBase   >(m, "UBehavior_Conditional")
        .def_readwrite("Conditions", &UBehavior_Conditional::Conditions)
        .def("StaticClass", &UBehavior_Conditional::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Conditional::ApplyBehaviorToContext)
          ;
}