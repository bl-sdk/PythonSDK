#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIconData()
{
    py::class_< FIconData >("FIconData")
        .def_readwrite("U", &FIconData::U)
        .def_readwrite("V", &FIconData::V)
        .def_readwrite("UL", &FIconData::UL)
        .def_readwrite("VL", &FIconData::VL)
        .def_readwrite("Scale", &FIconData::Scale)
  ;
}