#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILightProjectileManagerOwner()
{
    py::class_< UILightProjectileManagerOwner,  UInterface   >("UILightProjectileManagerOwner")
        .def("StaticClass", &UILightProjectileManagerOwner::StaticClass, py::return_value_policy::reference)
        .def("GetLightProjMgrFor", &UILightProjectileManagerOwner::GetLightProjMgrFor, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}