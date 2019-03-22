#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetExplosionDefinition(py::module &m)
{
    py::class_< UProjectileBehavior_SetExplosionDefinition,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetExplosionDefinition")
        .def_readwrite("ExplosionDefinition", &UProjectileBehavior_SetExplosionDefinition::ExplosionDefinition)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetExplosionDefinition::ApplyBehaviorToContext)
          ;
}