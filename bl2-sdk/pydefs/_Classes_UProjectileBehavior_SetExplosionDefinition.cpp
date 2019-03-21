#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetExplosionDefinition(py::object m)
{
    py::class_< UProjectileBehavior_SetExplosionDefinition,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetExplosionDefinition")
        .def_readwrite("ExplosionDefinition", &UProjectileBehavior_SetExplosionDefinition::ExplosionDefinition)
        .def("StaticClass", &UProjectileBehavior_SetExplosionDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetExplosionDefinition::ApplyBehaviorToContext)
          ;
}