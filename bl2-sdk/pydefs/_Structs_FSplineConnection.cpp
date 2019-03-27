#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSplineConnection(py::module &m)
{
    py::class_< FSplineConnection >(m, "FSplineConnection")
        .def_readwrite("SplineComponent", &FSplineConnection::SplineComponent)
        .def_readwrite("ConnectTo", &FSplineConnection::ConnectTo)
  ;
}