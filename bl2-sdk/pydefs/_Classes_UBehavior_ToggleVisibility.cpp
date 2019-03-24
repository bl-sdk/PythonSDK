#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleVisibility(py::module &m)
{
    py::class_< UBehavior_ToggleVisibility,  UBehaviorBase   >(m, "UBehavior_ToggleVisibility")
		.def_static("StaticClass", &UBehavior_ToggleVisibility::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleVisibility::ApplyBehaviorToContext)
          ;
}