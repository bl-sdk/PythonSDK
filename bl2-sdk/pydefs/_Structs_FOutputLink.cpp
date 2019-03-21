#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOutputLink()
{
    py::class_< FOutputLink >("FOutputLink")
        .def_readwrite("Links", &FOutputLink::Links)
  ;
}