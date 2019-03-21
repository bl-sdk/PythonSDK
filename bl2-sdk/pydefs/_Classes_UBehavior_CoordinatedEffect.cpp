#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CoordinatedEffect()
{
    class_< UBehavior_CoordinatedEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CoordinatedEffect", no_init)
        .def_readwrite("Status", &UBehavior_CoordinatedEffect::Status)
        .def_readwrite("Effect", &UBehavior_CoordinatedEffect::Effect)
        .def("StaticClass", &UBehavior_CoordinatedEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CoordinatedEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}