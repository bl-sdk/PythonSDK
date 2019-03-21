#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeSlotEffectAttributeValueResolver()
{
    class_< UAttributeSlotEffectAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UAttributeSlotEffectAttributeValueResolver", no_init)
        .def_readwrite("SlotProperty", &UAttributeSlotEffectAttributeValueResolver::SlotProperty)
        .def_readwrite("SlotName", &UAttributeSlotEffectAttributeValueResolver::SlotName)
        .def("StaticClass", &UAttributeSlotEffectAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}