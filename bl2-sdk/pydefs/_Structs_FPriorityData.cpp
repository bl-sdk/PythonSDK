#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPriorityData(py::object m)
{
    py::class_< FPriorityData >(m, "FPriorityData")
        .def_readwrite("Description", &FPriorityData::Description)
        .def_readwrite("Condition", &FPriorityData::Condition)
  ;
}