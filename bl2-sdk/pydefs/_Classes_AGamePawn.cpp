#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGamePawn()
{
    py::class_< AGamePawn,  APawn   >("AGamePawn")
        .def("StaticClass", &AGamePawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}