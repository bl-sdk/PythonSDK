#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleSetReference()
{
    py::class_< FRuleSetReference >("FRuleSetReference")
        .def_readwrite("ReferenceName", &FRuleSetReference::ReferenceName)
        .def_readwrite("ReferenceRuleSet", &FRuleSetReference::ReferenceRuleSet)
  ;
}