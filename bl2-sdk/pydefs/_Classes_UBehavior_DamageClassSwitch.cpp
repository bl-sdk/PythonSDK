#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DamageClassSwitch()
{
    class_< UBehavior_DamageClassSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DamageClassSwitch", no_init)
        .def_readwrite("HitObject", &UBehavior_DamageClassSwitch::HitObject)
        .def("StaticClass", &UBehavior_DamageClassSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DamageClassSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}