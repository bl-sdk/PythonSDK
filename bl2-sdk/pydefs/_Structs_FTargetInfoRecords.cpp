#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetInfoRecord()
{
    py::class_< FTargetInfoRecord,  FTimeStampedRecord   >("FTargetInfoRecord")
        .def_readwrite("TheObj", &FTargetInfoRecord::TheObj)
        .def_readwrite("InUse", &FTargetInfoRecord::InUse)
  ;
}