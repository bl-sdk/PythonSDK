#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDecalReceiver(py::object m)
{
    py::class_< FDecalReceiver >(m, "FDecalReceiver")
        .def_readwrite("Component", &FDecalReceiver::Component)
        .def_readwrite("RenderData", &FDecalReceiver::RenderData)
  ;
}