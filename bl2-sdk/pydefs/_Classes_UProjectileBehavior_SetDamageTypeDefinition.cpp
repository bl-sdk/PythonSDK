#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetDamageTypeDefinition(py::module &m)
{
    py::class_< UProjectileBehavior_SetDamageTypeDefinition,  UBehaviorBase   >(m, "UProjectileBehavior_SetDamageTypeDefinition")
		.def_static("StaticClass", &UProjectileBehavior_SetDamageTypeDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageTypeDefinition", &UProjectileBehavior_SetDamageTypeDefinition::DamageTypeDefinition)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetDamageTypeDefinition::ApplyBehaviorToContext)
          ;
}