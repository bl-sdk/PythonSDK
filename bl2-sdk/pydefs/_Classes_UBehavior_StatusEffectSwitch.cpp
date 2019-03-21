#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_StatusEffectSwitch()
{
    class_< UBehavior_StatusEffectSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_StatusEffectSwitch", no_init)
        .def_readwrite("StatusEffectType", &UBehavior_StatusEffectSwitch::StatusEffectType)
        .def("StaticClass", &UBehavior_StatusEffectSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_StatusEffectSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}