#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActionSequenceRecord(py::module &m)
{
    py::class_< FActionSequenceRecord,  FTimeStampedRecord   >(m, "FActionSequenceRecord")
        .def_readwrite("TheObj", &FActionSequenceRecord::TheObj)
        .def_readwrite("InUse", &FActionSequenceRecord::InUse)
  ;
}