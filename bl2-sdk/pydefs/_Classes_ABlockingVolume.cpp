#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingVolume()
{
    py::class_< ABlockingVolume,  AVolume   >("ABlockingVolume")
        .def("StaticClass", &ABlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ABlockingVolume::OnToggle)
        .staticmethod("StaticClass")
  ;
}