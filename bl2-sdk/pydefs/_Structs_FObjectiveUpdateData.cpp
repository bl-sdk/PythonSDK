#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveUpdateData(py::module &m)
{
    py::class_< FObjectiveUpdateData >(m, "FObjectiveUpdateData")
        .def_readwrite("Objective", &FObjectiveUpdateData::Objective)
        .def_readwrite("ObjectiveBit", &FObjectiveUpdateData::ObjectiveBit)
  ;
}