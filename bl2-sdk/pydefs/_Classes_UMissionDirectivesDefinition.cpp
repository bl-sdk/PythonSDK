#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionDirectivesDefinition()
{
    class_< UMissionDirectivesDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UMissionDirectivesDefinition", no_init)
        .def_readwrite("MissionDirectives", &UMissionDirectivesDefinition::MissionDirectives)
        .def("StaticClass", &UMissionDirectivesDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("AddDirective", &UMissionDirectivesDefinition::AddDirective)
        .def("AddWaypointsForDirective", &UMissionDirectivesDefinition::AddWaypointsForDirective)
        .def("CreateWaypoints", &UMissionDirectivesDefinition::CreateWaypoints)
        .staticmethod("StaticClass")
  ;
}