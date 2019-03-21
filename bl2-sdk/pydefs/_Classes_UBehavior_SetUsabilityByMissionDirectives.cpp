#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsabilityByMissionDirectives()
{
    class_< UBehavior_SetUsabilityByMissionDirectives, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetUsabilityByMissionDirectives", no_init)
        .def_readwrite("ChangeUsability", &UBehavior_SetUsabilityByMissionDirectives::ChangeUsability)
        .def("StaticClass", &UBehavior_SetUsabilityByMissionDirectives::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetUsabilityByMissionDirectives::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}