#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOutputLink(py::module &m)
{
    py::class_< FOutputLink >(m, "FOutputLink")
        .def_readwrite("Links", &FOutputLink::Links)
  ;
}