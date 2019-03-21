#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateMissionObjective()
{
    class_< UBehavior_UpdateMissionObjective, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UpdateMissionObjective", no_init)
        .def_readwrite("MissionObjective", &UBehavior_UpdateMissionObjective::MissionObjective)
        .def("StaticClass", &UBehavior_UpdateMissionObjective::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UpdateMissionObjective::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}