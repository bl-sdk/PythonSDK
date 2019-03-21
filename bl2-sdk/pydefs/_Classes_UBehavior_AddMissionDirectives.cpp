#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddMissionDirectives()
{
    class_< UBehavior_AddMissionDirectives, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddMissionDirectives", no_init)
        .def_readwrite("MissionDirectives", &UBehavior_AddMissionDirectives::MissionDirectives)
        .def("StaticClass", &UBehavior_AddMissionDirectives::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddMissionDirectives::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}