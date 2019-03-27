#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProfileDefinition(py::module &m)
{
    py::class_< FProfileDefinition >(m, "FProfileDefinition")
        .def_readwrite("Profile", &FProfileDefinition::Profile)
        .def_readwrite("Definition", &FProfileDefinition::Definition)
  ;
}