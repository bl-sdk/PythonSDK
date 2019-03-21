#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeExpModifier(py::object m)
{
    py::class_< FDamageTypeExpModifier >(m, "FDamageTypeExpModifier")
        .def_readwrite("DamageSource", &FDamageTypeExpModifier::DamageSource)
        .def_readwrite("TypeDefinition", &FDamageTypeExpModifier::TypeDefinition)
        .def_readwrite("Multiplier", &FDamageTypeExpModifier::Multiplier)
  ;
}