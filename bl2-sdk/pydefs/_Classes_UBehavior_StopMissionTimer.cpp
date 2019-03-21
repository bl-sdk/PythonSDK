#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopMissionTimer()
{
    py::class_< UBehavior_StopMissionTimer,  UBehaviorBase   >("UBehavior_StopMissionTimer")
        .def("StaticClass", &UBehavior_StopMissionTimer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StopMissionTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}