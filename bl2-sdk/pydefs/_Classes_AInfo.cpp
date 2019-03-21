#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInfo()
{
    py::class_< AInfo,  AActor   >("AInfo")
        .def("StaticClass", &AInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}