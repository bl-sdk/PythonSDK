#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_SpecialMovement()
{
    py::class_< URES_SpecialMovement,  UActionResource   >("URES_SpecialMovement")
        .def("StaticClass", &URES_SpecialMovement::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}