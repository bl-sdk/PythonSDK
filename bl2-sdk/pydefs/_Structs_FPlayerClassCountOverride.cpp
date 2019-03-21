#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerClassCountOverride()
{
    py::class_< FPlayerClassCountOverride >("FPlayerClassCountOverride")
        .def_readwrite("Override", &FPlayerClassCountOverride::Override)
        .def_readwrite("PlayerClassIdDef", &FPlayerClassCountOverride::PlayerClassIdDef)
  ;
}