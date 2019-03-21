#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_Behavior()
{
    py::class_< URES_Behavior,  UActionResource   >("URES_Behavior")
        .def("StaticClass", &URES_Behavior::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}