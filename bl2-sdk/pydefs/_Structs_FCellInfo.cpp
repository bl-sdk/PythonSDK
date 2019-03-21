#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCellInfo()
{
    py::class_< FCellInfo >("FCellInfo")
        .def_readwrite("AbsolutePosition", &FCellInfo::AbsolutePosition)
        .def_readwrite("Width", &FCellInfo::Width)
        .def_readwrite("Height", &FCellInfo::Height)
        .def_readwrite("CellName", &FCellInfo::CellName)
  ;
}