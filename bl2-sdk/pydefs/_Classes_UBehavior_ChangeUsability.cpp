#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeUsability(py::object m)
{
    py::class_< UBehavior_ChangeUsability,  UBehaviorBase   >(m, "UBehavior_ChangeUsability")
        .def_readwrite("ChangeUsability", &UBehavior_ChangeUsability::ChangeUsability)
        .def_readwrite("UsabilityType", &UBehavior_ChangeUsability::UsabilityType)
        .def("StaticClass", &UBehavior_ChangeUsability::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeUsability::ApplyBehaviorToContext)
          ;
}