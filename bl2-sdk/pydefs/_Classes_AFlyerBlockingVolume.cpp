#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFlyerBlockingVolume(py::module &m)
{
    py::class_< AFlyerBlockingVolume,  ABlockingVolume   >(m, "AFlyerBlockingVolume")
        .def("StaticClass", &AFlyerBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &AFlyerBlockingVolume::StopsProjectile)
          ;
}