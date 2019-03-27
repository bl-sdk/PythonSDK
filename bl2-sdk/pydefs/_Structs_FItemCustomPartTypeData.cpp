#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemCustomPartTypeData(py::module &m)
{
    py::class_< FItemCustomPartTypeData >(m, "FItemCustomPartTypeData")
        .def_readwrite("WeightedParts", &FItemCustomPartTypeData::WeightedParts)
  ;
}