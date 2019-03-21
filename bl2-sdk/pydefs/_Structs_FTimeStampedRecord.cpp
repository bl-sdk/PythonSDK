#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimeStampedRecord(py::object m)
{
    py::class_< FTimeStampedRecord >(m, "FTimeStampedRecord")
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
  ;
}