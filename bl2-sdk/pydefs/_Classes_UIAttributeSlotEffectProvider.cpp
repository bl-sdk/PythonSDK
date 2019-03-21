#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAttributeSlotEffectProvider()
{
    class_< UIAttributeSlotEffectProvider, bases< UInterface >  , boost::noncopyable>("UIAttributeSlotEffectProvider", no_init)
        .def("StaticClass", &UIAttributeSlotEffectProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeSlotModifierValue", &UIAttributeSlotEffectProvider::GetAttributeSlotModifierValue)
        .def("GetAttributeSlotGrade", &UIAttributeSlotEffectProvider::GetAttributeSlotGrade)
        .staticmethod("StaticClass")
  ;
}