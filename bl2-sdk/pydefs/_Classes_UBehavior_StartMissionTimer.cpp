#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StartMissionTimer()
{
    py::class_< UBehavior_StartMissionTimer,  UBehaviorBase   >("UBehavior_StartMissionTimer")
        .def("StaticClass", &UBehavior_StartMissionTimer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StartMissionTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}