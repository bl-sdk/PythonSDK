#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleBlockingVolume(py::module &m)
{
    py::class_< AVehicleBlockingVolume,  ABlockingVolume   >(m, "AVehicleBlockingVolume")
        .def("StopsProjectile", &AVehicleBlockingVolume::StopsProjectile)
          ;
}