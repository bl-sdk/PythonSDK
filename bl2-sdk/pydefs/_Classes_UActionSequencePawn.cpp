#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionSequencePawn()
{
    py::class_< UActionSequencePawn,  UActionSequence   >("UActionSequencePawn")
        .def_readwrite("MyGearboxMind", &UActionSequencePawn::MyGearboxMind)
        .def_readwrite("MyGearboxPawn", &UActionSequencePawn::MyGearboxPawn)
        .def("StaticClass", &UActionSequencePawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}