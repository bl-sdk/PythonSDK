#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProfileDefinition()
{
    py::class_< FProfileDefinition >("FProfileDefinition")
        .def_readwrite("Profile", &FProfileDefinition::Profile)
        .def_readwrite("Definition", &FProfileDefinition::Definition)
  ;
}