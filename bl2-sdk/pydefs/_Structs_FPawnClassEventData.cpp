#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPawnClassEventData(py::module &m)
{
    py::class_< FPawnClassEventData >(m, "FPawnClassEventData")
        .def_readwrite("PawnClassName", &FPawnClassEventData::PawnClassName)
  ;
}