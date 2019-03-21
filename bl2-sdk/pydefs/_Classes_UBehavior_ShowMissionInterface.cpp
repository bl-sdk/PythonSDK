#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ShowMissionInterface()
{
    class_< UBehavior_ShowMissionInterface, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ShowMissionInterface", no_init)
        .def("StaticClass", &UBehavior_ShowMissionInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_ShowMissionInterface::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ShowMissionInterface::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}