#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpulseData()
{
    py::class_< FImpulseData >("FImpulseData")
        .def_readwrite("Impulse", &FImpulseData::Impulse)
        .def_readwrite("Source", &FImpulseData::Source)
  ;
}