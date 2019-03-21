#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStatusEffectChanceModifierResolver()
{
    class_< UStatusEffectChanceModifierResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UStatusEffectChanceModifierResolver", no_init)
        .def("StaticClass", &UStatusEffectChanceModifierResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UStatusEffectChanceModifierResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}