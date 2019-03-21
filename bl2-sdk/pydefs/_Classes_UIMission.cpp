#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMission()
{
    class_< UIMission, bases< UInterface >  , boost::noncopyable>("UIMission", no_init)
        .def("StaticClass", &UIMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMissionReactionObjectiveComplete", &UIMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &UIMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &UIMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &UIMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &UIMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &UIMission::eventMissionReactionLevelLoad)
        .staticmethod("StaticClass")
  ;
}