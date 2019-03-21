#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetExplosionDefinition()
{
    class_< UProjectileBehavior_SetExplosionDefinition, bases< UProjectileBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetExplosionDefinition", no_init)
        .def_readwrite("ExplosionDefinition", &UProjectileBehavior_SetExplosionDefinition::ExplosionDefinition)
        .def("StaticClass", &UProjectileBehavior_SetExplosionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetExplosionDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}