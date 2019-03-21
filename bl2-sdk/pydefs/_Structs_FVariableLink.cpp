#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVariableLink()
{
    py::class_< FVariableLink >("FVariableLink")
        .def_readwrite("Links", &FVariableLink::Links)
  ;
}