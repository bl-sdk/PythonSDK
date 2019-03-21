#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_UseVehicle()
{
    py::class_< URES_UseVehicle,  UActionResource   >("URES_UseVehicle")
        .def("StaticClass", &URES_UseVehicle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}