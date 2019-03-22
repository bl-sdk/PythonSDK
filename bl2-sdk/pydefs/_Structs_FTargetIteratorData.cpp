#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetIteratorData(py::module &m)
{
    py::class_< FTargetIteratorData >(m, "FTargetIteratorData")
        .def_readwrite("Iterator", &FTargetIteratorData::Iterator)
        .def_readwrite("Weight", &FTargetIteratorData::Weight)
  ;
}