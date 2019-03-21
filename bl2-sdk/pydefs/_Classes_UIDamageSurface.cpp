#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageSurface()
{
    py::class_< UIDamageSurface,  UInterface   >("UIDamageSurface")
        .def("StaticClass", &UIDamageSurface::StaticClass, py::return_value_policy::reference)
        .def("IsFullyArmored", &UIDamageSurface::IsFullyArmored)
        .def("GetDamageSurfaceTypeFromHit", &UIDamageSurface::GetDamageSurfaceTypeFromHit)
        .def("GetDefaultDamageSurfaceType", &UIDamageSurface::GetDefaultDamageSurfaceType)
        .staticmethod("StaticClass")
  ;
}