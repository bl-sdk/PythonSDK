#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DamageSourceSwitch()
{
    class_< UBehavior_DamageSourceSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DamageSourceSwitch", no_init)
        .def_readwrite("DamageSource", &UBehavior_DamageSourceSwitch::DamageSource)
        .def("StaticClass", &UBehavior_DamageSourceSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DamageSourceSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}