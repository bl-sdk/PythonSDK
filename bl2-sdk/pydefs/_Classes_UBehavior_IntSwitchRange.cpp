#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_IntSwitchRange()
{
    class_< UBehavior_IntSwitchRange, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_IntSwitchRange", no_init)
        .def_readwrite("CheckValue", &UBehavior_IntSwitchRange::CheckValue)
        .def_readwrite("RangeMin", &UBehavior_IntSwitchRange::RangeMin)
        .def_readwrite("RangeMax", &UBehavior_IntSwitchRange::RangeMax)
        .def("StaticClass", &UBehavior_IntSwitchRange::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_IntSwitchRange::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}