#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageSurface(py::module &m)
{
    py::class_< UIDamageSurface,  UInterface   >(m, "UIDamageSurface")
        .def("IsFullyArmored", &UIDamageSurface::IsFullyArmored)
        .def("GetDamageSurfaceTypeFromHit", &UIDamageSurface::GetDamageSurfaceTypeFromHit)
        .def("GetDefaultDamageSurfaceType", &UIDamageSurface::GetDefaultDamageSurfaceType)
          ;
}