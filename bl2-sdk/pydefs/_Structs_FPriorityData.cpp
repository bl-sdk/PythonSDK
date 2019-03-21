#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPriorityData()
{
    py::class_< FPriorityData >("FPriorityData")
        .def_readwrite("Description", &FPriorityData::Description)
        .def_readwrite("Condition", &FPriorityData::Condition)
  ;
}