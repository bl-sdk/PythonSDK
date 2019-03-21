#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FailMission()
{
    py::class_< UBehavior_FailMission,  UBehaviorBase   >("UBehavior_FailMission")
        .def("StaticClass", &UBehavior_FailMission::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_FailMission::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}