#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverInfo(py::object m)
{
    py::class_< FCoverInfo >(m, "FCoverInfo")
        .def_readwrite("Link", &FCoverInfo::Link)
        .def_readwrite("SlotIdx", &FCoverInfo::SlotIdx)
  ;
}