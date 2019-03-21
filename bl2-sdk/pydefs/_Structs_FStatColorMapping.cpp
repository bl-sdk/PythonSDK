#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatColorMapping()
{
    py::class_< FStatColorMapping >("FStatColorMapping")
        .def_readwrite("StatName", &FStatColorMapping::StatName)
        .def_readwrite("ColorMap", &FStatColorMapping::ColorMap)
  ;
}