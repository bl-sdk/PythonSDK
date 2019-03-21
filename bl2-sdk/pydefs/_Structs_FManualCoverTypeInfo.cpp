#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManualCoverTypeInfo()
{
    py::class_< FManualCoverTypeInfo >("FManualCoverTypeInfo")
        .def_readwrite("SlotIndex", &FManualCoverTypeInfo::SlotIndex)
        .def_readwrite("ManualCoverType", &FManualCoverTypeInfo::ManualCoverType)
  ;
}