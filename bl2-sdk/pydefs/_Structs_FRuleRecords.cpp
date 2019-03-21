#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleRecord()
{
    py::class_< FRuleRecord,  FTimeStampedRecord   >("FRuleRecord")
        .def_readwrite("TheObj", &FRuleRecord::TheObj)
        .def_readwrite("InUse", &FRuleRecord::InUse)
  ;
}