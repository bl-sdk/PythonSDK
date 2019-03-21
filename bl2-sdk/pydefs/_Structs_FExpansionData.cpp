#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExpansionData()
{
    py::class_< FExpansionData >("FExpansionData")
        .def_readwrite("Tag", &FExpansionData::Tag)
        .def_readwrite("Data", &FExpansionData::Data)
  ;
}