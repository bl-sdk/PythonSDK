#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Firing()
{
    py::class_< URES_Firing,  UActionResource   >("URES_Firing")
        .def("StaticClass", &URES_Firing::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}