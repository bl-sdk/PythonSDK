#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleRecord(py::module &m)
{
    py::class_< FRuleRecord,  FTimeStampedRecord   >(m, "FRuleRecord")
        .def_readwrite("TheObj", &FRuleRecord::TheObj)
        .def_readwrite("InUse", &FRuleRecord::InUse)
  ;
}