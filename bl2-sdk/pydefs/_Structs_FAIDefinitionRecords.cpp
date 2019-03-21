#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIDefinitionRecord(py::object m)
{
    py::class_< FAIDefinitionRecord,  FTimeStampedRecord   >(m, "FAIDefinitionRecord")
        .def_readwrite("TheObj", &FAIDefinitionRecord::TheObj)
        .def_readwrite("InUse", &FAIDefinitionRecord::InUse)
  ;
}