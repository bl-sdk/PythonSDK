#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTopStatData(py::module &m)
{
    py::class_< FTopStatData >(m, "FTopStatData")
        .def_readwrite("LabelText", &FTopStatData::LabelText)
        .def_readwrite("ValueText", &FTopStatData::ValueText)
        .def_readwrite("AuxText", &FTopStatData::AuxText)
        .def_readwrite("Arrow", &FTopStatData::Arrow)
        .def_readwrite("IconName", &FTopStatData::IconName)
  ;
}