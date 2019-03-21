#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttemptItemCallout()
{
    class_< UBehavior_AttemptItemCallout, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttemptItemCallout", no_init)
        .def_readwrite("DET_CallOut", &UBehavior_AttemptItemCallout::DET_CallOut)
        .def_readwrite("InstanceDataName", &UBehavior_AttemptItemCallout::InstanceDataName)
        .def("StaticClass", &UBehavior_AttemptItemCallout::StaticClass, return_value_policy< reference_existing_object >())
        .def("TestTargetVisibility", &UBehavior_AttemptItemCallout::TestTargetVisibility)
        .def("ApplyBehaviorToContext", &UBehavior_AttemptItemCallout::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}