#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAppliedAttributeEffect()
{
    py::class_< FAppliedAttributeEffect >("FAppliedAttributeEffect")
        .def_readwrite("Context", &FAppliedAttributeEffect::Context)
        .def_readwrite("Attribute", &FAppliedAttributeEffect::Attribute)
        .def_readwrite("Modifier", &FAppliedAttributeEffect::Modifier)
  ;
}