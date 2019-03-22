#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleTelescopeOverlay(py::module &m)
{
    py::class_< UBehavior_ToggleTelescopeOverlay,  UBehaviorBase   >(m, "UBehavior_ToggleTelescopeOverlay")
        .def("ResolveController", &UBehavior_ToggleTelescopeOverlay::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleTelescopeOverlay::ApplyBehaviorToContext)
          ;
}