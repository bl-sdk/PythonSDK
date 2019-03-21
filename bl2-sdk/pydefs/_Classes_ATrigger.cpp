#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger(py::object m)
{
    py::class_< ATrigger,  AActor   >(m, "ATrigger")
        .def_readwrite("CylinderComponent", &ATrigger::CylinderComponent)
        .def_readwrite("AITriggerDelay", &ATrigger::AITriggerDelay)
        .def("StaticClass", &ATrigger::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &ATrigger::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ATrigger::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ATrigger::ShouldSaveForCheckpoint)
        .def("StopsProjectile", &ATrigger::StopsProjectile)
        .def("UnTrigger", &ATrigger::UnTrigger)
        .def("NotifyTriggered", &ATrigger::NotifyTriggered)
        .def("eventTouch", &ATrigger::eventTouch)
        .def("eventPostBeginPlay", &ATrigger::eventPostBeginPlay)
        .def("TriggerDetachSprites", &ATrigger::TriggerDetachSprites)
          ;
}