#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UILightProjectileManagerOwner(py::module &m)
{
    py::class_< UILightProjectileManagerOwner,  UInterface   >(m, "UILightProjectileManagerOwner")
        .def("StaticClass", &UILightProjectileManagerOwner::StaticClass, py::return_value_policy::reference)
        .def("GetLightProjMgrFor", &UILightProjectileManagerOwner::GetLightProjMgrFor, py::return_value_policy::reference)
          ;
}