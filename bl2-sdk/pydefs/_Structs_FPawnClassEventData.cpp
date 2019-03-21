#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPawnClassEventData()
{
    py::class_< FPawnClassEventData >("FPawnClassEventData")
        .def_readwrite("PawnClassName", &FPawnClassEventData::PawnClassName)
  ;
}