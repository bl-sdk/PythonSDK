#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveUpdateData()
{
    py::class_< FObjectiveUpdateData >("FObjectiveUpdateData")
        .def_readwrite("Objective", &FObjectiveUpdateData::Objective)
        .def_readwrite("ObjectiveBit", &FObjectiveUpdateData::ObjectiveBit)
  ;
}