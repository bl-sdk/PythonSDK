#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetProximity()
{
    py::class_< UProjectileBehavior_SetProximity,  UProjectileBehaviorBase   >("UProjectileBehavior_SetProximity")
        .def_readwrite("ProximityRadius", &UProjectileBehavior_SetProximity::ProximityRadius)
        .def_readwrite("ProximityHeight", &UProjectileBehavior_SetProximity::ProximityHeight)
        .def("StaticClass", &UProjectileBehavior_SetProximity::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetProximity::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}