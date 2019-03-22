#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReferencePointComparisonData(py::module &m)
{
    py::class_< FReferencePointComparisonData >(m, "FReferencePointComparisonData")
        .def_readwrite("A", &FReferencePointComparisonData::A)
        .def_readwrite("B", &FReferencePointComparisonData::B)
  ;
}