#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APathBlockingVolume()
{
    py::class_< APathBlockingVolume,  AVolume   >("APathBlockingVolume")
        .def("StaticClass", &APathBlockingVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}