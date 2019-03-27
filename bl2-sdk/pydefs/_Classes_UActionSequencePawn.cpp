#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActionSequencePawn(py::module &m)
{
    py::class_< UActionSequencePawn,  UActionSequence   >(m, "UActionSequencePawn")
		.def_static("StaticClass", &UActionSequencePawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyGearboxMind", &UActionSequencePawn::MyGearboxMind)
        .def_readwrite("MyGearboxPawn", &UActionSequencePawn::MyGearboxPawn)
          ;
}