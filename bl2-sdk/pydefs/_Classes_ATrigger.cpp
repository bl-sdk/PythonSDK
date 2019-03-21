#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATrigger()
{
    class_< ATrigger, bases< AActor >  , boost::noncopyable>("ATrigger", no_init)
        .def_readwrite("CylinderComponent", &ATrigger::CylinderComponent)
        .def_readwrite("AITriggerDelay", &ATrigger::AITriggerDelay)
        .def("StaticClass", &ATrigger::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &ATrigger::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ATrigger::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ATrigger::ShouldSaveForCheckpoint)
        .def("StopsProjectile", &ATrigger::StopsProjectile)
        .def("UnTrigger", &ATrigger::UnTrigger)
        .def("NotifyTriggered", &ATrigger::NotifyTriggered)
        .def("eventTouch", &ATrigger::eventTouch)
        .def("eventPostBeginPlay", &ATrigger::eventPostBeginPlay)
        .def("TriggerDetachSprites", &ATrigger::TriggerDetachSprites)
        .staticmethod("StaticClass")
  ;
}