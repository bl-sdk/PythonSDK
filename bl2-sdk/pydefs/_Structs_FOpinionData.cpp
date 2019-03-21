#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOpinionData(py::object m)
{
    py::class_< FOpinionData >(m, "FOpinionData")
        .def_readwrite("Opinion", &FOpinionData::Opinion)
        .def_readwrite("Allegiance", &FOpinionData::Allegiance)
  ;
}