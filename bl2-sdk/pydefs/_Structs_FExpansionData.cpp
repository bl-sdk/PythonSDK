#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExpansionData(py::object m)
{
    py::class_< FExpansionData >(m, "FExpansionData")
        .def_readwrite("Tag", &FExpansionData::Tag)
        .def_readwrite("Data", &FExpansionData::Data)
  ;
}