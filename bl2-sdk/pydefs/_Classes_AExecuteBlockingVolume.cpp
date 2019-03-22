#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AExecuteBlockingVolume(py::module &m)
{
    py::class_< AExecuteBlockingVolume,  ABlockingVolume   >(m, "AExecuteBlockingVolume")
        .def("StopsProjectile", &AExecuteBlockingVolume::StopsProjectile)
          ;
}