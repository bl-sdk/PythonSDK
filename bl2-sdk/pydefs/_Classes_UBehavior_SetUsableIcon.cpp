#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsableIcon(py::module &m)
{
    py::class_< UBehavior_SetUsableIcon,  UBehaviorBase   >(m, "UBehavior_SetUsableIcon")
		.def_static("StaticClass", &UBehavior_SetUsableIcon::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Icon", &UBehavior_SetUsableIcon::Icon)
        .def_readwrite("UsabilityType", &UBehavior_SetUsableIcon::UsabilityType)
        .def("ApplyBehaviorToContext", &UBehavior_SetUsableIcon::ApplyBehaviorToContext)
          ;
}