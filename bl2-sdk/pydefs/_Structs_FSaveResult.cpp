#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSaveResult(py::module &m)
{
    py::class_< FSaveResult >(m, "FSaveResult")
        .def_readwrite("charID", &FSaveResult::charID)
        .def_readwrite("Data", &FSaveResult::Data)
  ;
}