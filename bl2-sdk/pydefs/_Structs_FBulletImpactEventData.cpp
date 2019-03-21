#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBulletImpactEventData(py::object m)
{
    py::class_< FBulletImpactEventData >(m, "FBulletImpactEventData")
        .def_readwrite("DamageSurfaceType", &FBulletImpactEventData::DamageSurfaceType)
        .def_readwrite("Behaviors", &FBulletImpactEventData::Behaviors)
  ;
}