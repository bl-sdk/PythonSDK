#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterTargetable(py::object m)
{
    py::class_< UBehavior_RegisterTargetable,  UBehaviorBase   >(m, "UBehavior_RegisterTargetable")
        .def("StaticClass", &UBehavior_RegisterTargetable::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RegisterTargetable::ApplyBehaviorToContext)
          ;
}