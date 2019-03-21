#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemCustomPartTypeData()
{
    py::class_< FItemCustomPartTypeData >("FItemCustomPartTypeData")
        .def_readwrite("WeightedParts", &FItemCustomPartTypeData::WeightedParts)
  ;
}