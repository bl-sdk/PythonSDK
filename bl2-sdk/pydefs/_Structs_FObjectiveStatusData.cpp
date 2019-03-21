#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveStatusData()
{
    py::class_< FObjectiveStatusData >("FObjectiveStatusData")
        .def_readwrite("Objectives", &FObjectiveStatusData::Objectives)
  ;
}