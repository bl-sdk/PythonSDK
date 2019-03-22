#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManualCoverTypeInfo(py::module &m)
{
    py::class_< FManualCoverTypeInfo >(m, "FManualCoverTypeInfo")
        .def_readwrite("SlotIndex", &FManualCoverTypeInfo::SlotIndex)
        .def_readwrite("ManualCoverType", &FManualCoverTypeInfo::ManualCoverType)
  ;
}