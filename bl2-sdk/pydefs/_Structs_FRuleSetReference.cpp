#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRuleSetReference(py::module &m)
{
    py::class_< FRuleSetReference >(m, "FRuleSetReference")
        .def_readwrite("ReferenceName", &FRuleSetReference::ReferenceName)
        .def_readwrite("ReferenceRuleSet", &FRuleSetReference::ReferenceRuleSet)
  ;
}