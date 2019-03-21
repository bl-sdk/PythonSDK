#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetDamageTypeDefinition()
{
    class_< UProjectileBehavior_SetDamageTypeDefinition, bases< UBehaviorBase >  , boost::noncopyable>("UProjectileBehavior_SetDamageTypeDefinition", no_init)
        .def_readwrite("DamageTypeDefinition", &UProjectileBehavior_SetDamageTypeDefinition::DamageTypeDefinition)
        .def("StaticClass", &UProjectileBehavior_SetDamageTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetDamageTypeDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}