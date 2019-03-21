#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsableIcon(py::object m)
{
    py::class_< UBehavior_SetUsableIcon,  UBehaviorBase   >(m, "UBehavior_SetUsableIcon")
        .def_readwrite("Icon", &UBehavior_SetUsableIcon::Icon)
        .def_readwrite("UsabilityType", &UBehavior_SetUsableIcon::UsabilityType)
        .def("StaticClass", &UBehavior_SetUsableIcon::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetUsableIcon::ApplyBehaviorToContext)
          ;
}