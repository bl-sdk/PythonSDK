#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleSetRecord()
{
    py::class_< FRuleSetRecord,  FTimeStampedRecord   >("FRuleSetRecord")
        .def_readwrite("TheObj", &FRuleSetRecord::TheObj)
        .def_readwrite("InUse", &FRuleSetRecord::InUse)
  ;
}