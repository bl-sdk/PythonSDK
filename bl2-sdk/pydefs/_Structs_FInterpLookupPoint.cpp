#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpLookupPoint()
{
    py::class_< FInterpLookupPoint >("FInterpLookupPoint")
        .def_readwrite("GroupName", &FInterpLookupPoint::GroupName)
        .def_readwrite("Time", &FInterpLookupPoint::Time)
  ;
}