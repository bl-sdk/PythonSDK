#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetProximity(py::module &m)
{
    py::class_< UProjectileBehavior_SetProximity,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetProximity")
        .def_readwrite("ProximityRadius", &UProjectileBehavior_SetProximity::ProximityRadius)
        .def_readwrite("ProximityHeight", &UProjectileBehavior_SetProximity::ProximityHeight)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetProximity::ApplyBehaviorToContext)
          ;
}