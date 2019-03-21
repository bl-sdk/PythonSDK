#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_OpinionSwitch()
{
    class_< UBehavior_OpinionSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_OpinionSwitch", no_init)
        .def_readwrite("Other", &UBehavior_OpinionSwitch::Other)
        .def("StaticClass", &UBehavior_OpinionSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_OpinionSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}