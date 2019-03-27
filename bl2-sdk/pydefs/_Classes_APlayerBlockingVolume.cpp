#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerBlockingVolume(py::module &m)
{
    py::class_< APlayerBlockingVolume,  ABlockingVolume   >(m, "APlayerBlockingVolume")
		.def_static("StaticClass", &APlayerBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &APlayerBlockingVolume::StopsProjectile)
          ;
}