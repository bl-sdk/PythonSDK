#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerBlockingVolume(py::object m)
{
    py::class_< APlayerBlockingVolume,  ABlockingVolume   >(m, "APlayerBlockingVolume")
        .def("StaticClass", &APlayerBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &APlayerBlockingVolume::StopsProjectile)
          ;
}