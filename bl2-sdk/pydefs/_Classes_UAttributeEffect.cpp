#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeEffect()
{
    class_< UAttributeEffect, bases< UObject >  , boost::noncopyable>("UAttributeEffect", no_init)
        .def("StaticClass", &UAttributeEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveAttributeEffects", &UAttributeEffect::RemoveAttributeEffects)
        .def("ApplyAttributeEffects", &UAttributeEffect::ApplyAttributeEffects)
        .staticmethod("StaticClass")
  ;
}