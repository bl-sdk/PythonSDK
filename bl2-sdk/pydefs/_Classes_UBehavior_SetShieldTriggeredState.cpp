#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldTriggeredState()
{
    py::class_< UBehavior_SetShieldTriggeredState,  UBehaviorBase   >("UBehavior_SetShieldTriggeredState")
        .def("StaticClass", &UBehavior_SetShieldTriggeredState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldTriggeredState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}