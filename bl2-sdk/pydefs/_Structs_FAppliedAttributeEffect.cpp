#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAppliedAttributeEffect(py::module &m)
{
    py::class_< FAppliedAttributeEffect >(m, "FAppliedAttributeEffect")
        .def_readwrite("Context", &FAppliedAttributeEffect::Context)
        .def_readwrite("Attribute", &FAppliedAttributeEffect::Attribute)
        .def_readwrite("Modifier", &FAppliedAttributeEffect::Modifier)
  ;
}