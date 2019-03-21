#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_SpecialMove()
{
    py::class_< URES_SpecialMove,  UActionResource   >("URES_SpecialMove")
        .def("StaticClass", &URES_SpecialMove::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}