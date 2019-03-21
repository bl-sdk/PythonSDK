#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetDamageTypeDefinition()
{
    py::class_< UProjectileBehavior_SetDamageTypeDefinition,  UBehaviorBase   >("UProjectileBehavior_SetDamageTypeDefinition")
        .def_readwrite("DamageTypeDefinition", &UProjectileBehavior_SetDamageTypeDefinition::DamageTypeDefinition)
        .def("StaticClass", &UProjectileBehavior_SetDamageTypeDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetDamageTypeDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}