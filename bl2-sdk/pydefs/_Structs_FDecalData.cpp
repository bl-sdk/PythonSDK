#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDecalData(py::module &m)
{
    py::class_< FDecalData >(m, "FDecalData")
        .def_readwrite("Materials", &FDecalData::Materials)
        .def_readwrite("Width", &FDecalData::Width)
        .def_readwrite("Height", &FDecalData::Height)
        .def_readwrite("MinScale", &FDecalData::MinScale)
        .def_readwrite("MaxScale", &FDecalData::MaxScale)
  ;
}