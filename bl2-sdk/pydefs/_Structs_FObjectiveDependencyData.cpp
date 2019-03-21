#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectiveDependencyData(py::object m)
{
    py::class_< FObjectiveDependencyData >(m, "FObjectiveDependencyData")
        .def_readwrite("Objective", &FObjectiveDependencyData::Objective)
        .def_readwrite("Status", &FObjectiveDependencyData::Status)
  ;
}