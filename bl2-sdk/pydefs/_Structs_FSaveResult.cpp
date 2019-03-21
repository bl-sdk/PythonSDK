#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSaveResult()
{
    py::class_< FSaveResult >("FSaveResult")
        .def_readwrite("charID", &FSaveResult::charID)
        .def_readwrite("Data", &FSaveResult::Data)
  ;
}