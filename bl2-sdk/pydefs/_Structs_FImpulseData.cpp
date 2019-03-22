#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FImpulseData(py::module &m)
{
    py::class_< FImpulseData >(m, "FImpulseData")
        .def_readwrite("Impulse", &FImpulseData::Impulse)
        .def_readwrite("Source", &FImpulseData::Source)
  ;
}