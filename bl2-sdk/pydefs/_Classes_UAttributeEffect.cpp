#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeEffect()
{
    py::class_< UAttributeEffect,  UObject   >("UAttributeEffect")
        .def("StaticClass", &UAttributeEffect::StaticClass, py::return_value_policy::reference)
        .def("RemoveAttributeEffects", &UAttributeEffect::RemoveAttributeEffects)
        .def("ApplyAttributeEffects", &UAttributeEffect::ApplyAttributeEffects)
        .staticmethod("StaticClass")
  ;
}