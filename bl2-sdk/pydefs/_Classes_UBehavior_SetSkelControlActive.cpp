#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlActive(py::object m)
{
    py::class_< UBehavior_SetSkelControlActive,  UBehaviorBase   >(m, "UBehavior_SetSkelControlActive")
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlActive::SkelControlName)
        .def("StaticClass", &UBehavior_SetSkelControlActive::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlActive::ApplyBehaviorToContext)
          ;
}