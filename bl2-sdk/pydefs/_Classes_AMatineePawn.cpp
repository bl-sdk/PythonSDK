#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMatineePawn()
{
    py::class_< AMatineePawn,  APawn   >("AMatineePawn")
        .def("StaticClass", &AMatineePawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}