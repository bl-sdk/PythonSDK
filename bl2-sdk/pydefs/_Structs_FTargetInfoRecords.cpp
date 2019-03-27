#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetInfoRecord(py::module &m)
{
    py::class_< FTargetInfoRecord,  FTimeStampedRecord   >(m, "FTargetInfoRecord")
        .def_readwrite("TheObj", &FTargetInfoRecord::TheObj)
        .def_readwrite("InUse", &FTargetInfoRecord::InUse)
  ;
}