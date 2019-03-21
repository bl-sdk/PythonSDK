#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxGFxPlayParameters()
{
    py::class_< FGearboxGFxPlayParameters >("FGearboxGFxPlayParameters")
        .def_readwrite("Definition", &FGearboxGFxPlayParameters::Definition)
        .def_readwrite("OtherObject", &FGearboxGFxPlayParameters::OtherObject)
        .def_readwrite("PlayerOwner", &FGearboxGFxPlayParameters::PlayerOwner)
  ;
}