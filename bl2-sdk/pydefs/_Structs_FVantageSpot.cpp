#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVantageSpot()
{
    py::class_< FVantageSpot >("FVantageSpot")
        .def_readwrite("Location", &FVantageSpot::Location)
        .def_readwrite("VantageType", &FVantageSpot::VantageType)
  ;
}