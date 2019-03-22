#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpLookupPoint(py::module &m)
{
    py::class_< FInterpLookupPoint >(m, "FInterpLookupPoint")
        .def_readwrite("GroupName", &FInterpLookupPoint::GroupName)
        .def_readwrite("Time", &FInterpLookupPoint::Time)
  ;
}