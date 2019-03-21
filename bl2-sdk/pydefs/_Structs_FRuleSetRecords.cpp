#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleSetRecord(py::object m)
{
    py::class_< FRuleSetRecord,  FTimeStampedRecord   >(m, "FRuleSetRecord")
        .def_readwrite("TheObj", &FRuleSetRecord::TheObj)
        .def_readwrite("InUse", &FRuleSetRecord::InUse)
  ;
}