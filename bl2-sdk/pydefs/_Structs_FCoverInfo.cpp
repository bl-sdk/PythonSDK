#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverInfo()
{
    py::class_< FCoverInfo >("FCoverInfo")
        .def_readwrite("Link", &FCoverInfo::Link)
        .def_readwrite("SlotIdx", &FCoverInfo::SlotIdx)
  ;
}