#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveDependencyData()
{
    py::class_< FObjectiveDependencyData >("FObjectiveDependencyData")
        .def_readwrite("Objective", &FObjectiveDependencyData::Objective)
        .def_readwrite("Status", &FObjectiveDependencyData::Status)
  ;
}