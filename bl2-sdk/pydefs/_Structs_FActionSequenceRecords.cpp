#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActionSequenceRecord()
{
    py::class_< FActionSequenceRecord,  FTimeStampedRecord   >("FActionSequenceRecord")
        .def_readwrite("TheObj", &FActionSequenceRecord::TheObj)
        .def_readwrite("InUse", &FActionSequenceRecord::InUse)
  ;
}