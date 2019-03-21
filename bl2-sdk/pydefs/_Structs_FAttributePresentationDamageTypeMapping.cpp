#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributePresentationDamageTypeMapping()
{
    py::class_< FAttributePresentationDamageTypeMapping >("FAttributePresentationDamageTypeMapping")
        .def_readwrite("Presentation", &FAttributePresentationDamageTypeMapping::Presentation)
        .def_readwrite("DamageType", &FAttributePresentationDamageTypeMapping::DamageType)
  ;
}