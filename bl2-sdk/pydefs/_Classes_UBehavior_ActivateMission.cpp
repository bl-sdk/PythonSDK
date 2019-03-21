#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateMission()
{
    py::class_< UBehavior_ActivateMission,  UBehaviorBase   >("UBehavior_ActivateMission")
        .def("StaticClass", &UBehavior_ActivateMission::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ActivateMission::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}