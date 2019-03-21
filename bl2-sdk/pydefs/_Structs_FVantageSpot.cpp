#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVantageSpot(py::object m)
{
    py::class_< FVantageSpot >(m, "FVantageSpot")
        .def_readwrite("Location", &FVantageSpot::Location)
        .def_readwrite("VantageType", &FVantageSpot::VantageType)
  ;
}