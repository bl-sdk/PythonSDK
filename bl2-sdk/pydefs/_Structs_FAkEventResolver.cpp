#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAkEventResolver(py::object m)
{
    py::class_< FAkEventResolver >(m, "FAkEventResolver")
        .def_readwrite("Interaction", &FAkEventResolver::Interaction)
        .def_readwrite("AkEvent", &FAkEventResolver::AkEvent)
  ;
}