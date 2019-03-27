#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPriorityDebugStruct(py::module &m)
{
    py::class_< FPriorityDebugStruct >(m, "FPriorityDebugStruct")
        .def_readwrite("IteratorName", &FPriorityDebugStruct::IteratorName)
        .def_readwrite("ShortName", &FPriorityDebugStruct::ShortName)
        .def_readwrite("PriorityValue", &FPriorityDebugStruct::PriorityValue)
  ;
}