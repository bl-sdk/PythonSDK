#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASimpleVolume(py::object m)
{
    py::class_< ASimpleVolume,  AVolume   >(m, "ASimpleVolume")
        .def("StaticClass", &ASimpleVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &ASimpleVolume::StopsProjectile)
          ;
}