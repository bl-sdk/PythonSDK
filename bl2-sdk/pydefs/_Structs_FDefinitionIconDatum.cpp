#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDefinitionIconDatum()
{
    py::class_< FDefinitionIconDatum >("FDefinitionIconDatum")
        .def_readwrite("DefColor", &FDefinitionIconDatum::DefColor)
        .def_readwrite("DefIcon", &FDefinitionIconDatum::DefIcon)
        .def_readwrite("DefClass", &FDefinitionIconDatum::DefClass)
  ;
}