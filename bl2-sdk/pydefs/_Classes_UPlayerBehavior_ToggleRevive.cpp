#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleRevive()
{
    py::class_< UPlayerBehavior_ToggleRevive,  UPlayerBehaviorBase   >("UPlayerBehavior_ToggleRevive")
        .def("StaticClass", &UPlayerBehavior_ToggleRevive::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleRevive::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}