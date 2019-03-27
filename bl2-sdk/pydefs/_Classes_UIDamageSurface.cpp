#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageSurface(py::module &m)
{
    py::class_< UIDamageSurface,  UInterface   >(m, "UIDamageSurface")
		.def_static("StaticClass", &UIDamageSurface::StaticClass, py::return_value_policy::reference)
        .def("IsFullyArmored", &UIDamageSurface::IsFullyArmored)
        .def("GetDamageSurfaceTypeFromHit", &UIDamageSurface::GetDamageSurfaceTypeFromHit)
        .def("GetDefaultDamageSurfaceType", &UIDamageSurface::GetDefaultDamageSurfaceType)
          ;
}