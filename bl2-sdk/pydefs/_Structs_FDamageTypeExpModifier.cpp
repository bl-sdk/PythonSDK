#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeExpModifier()
{
    py::class_< FDamageTypeExpModifier >("FDamageTypeExpModifier")
        .def_readwrite("DamageSource", &FDamageTypeExpModifier::DamageSource)
        .def_readwrite("TypeDefinition", &FDamageTypeExpModifier::TypeDefinition)
        .def_readwrite("Multiplier", &FDamageTypeExpModifier::Multiplier)
  ;
}