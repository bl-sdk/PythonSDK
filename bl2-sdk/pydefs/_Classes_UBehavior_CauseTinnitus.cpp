#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CauseTinnitus()
{
    class_< UBehavior_CauseTinnitus, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CauseTinnitus", no_init)
        .def_readwrite("Radius", &UBehavior_CauseTinnitus::Radius)
        .def_readwrite("StrengthModifier", &UBehavior_CauseTinnitus::StrengthModifier)
        .def_readwrite("OverrideTinnitusAkEvent", &UBehavior_CauseTinnitus::OverrideTinnitusAkEvent)
        .def("StaticClass", &UBehavior_CauseTinnitus::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CauseTinnitus::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}