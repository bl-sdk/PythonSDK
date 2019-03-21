#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttributeEffect()
{
    py::class_< UBehavior_AttributeEffect,  UBehaviorBase   >("UBehavior_AttributeEffect")
        .def_readwrite("AttributeEffect", &UBehavior_AttributeEffect::AttributeEffect)
        .def_readwrite("AttributeEffects", &UBehavior_AttributeEffect::AttributeEffects)
        .def("StaticClass", &UBehavior_AttributeEffect::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AttributeEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}