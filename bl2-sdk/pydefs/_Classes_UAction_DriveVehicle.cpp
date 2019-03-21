#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_DriveVehicle()
{
    class_< UAction_DriveVehicle, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_DriveVehicle", no_init)
        .def_readwrite("MaxSpeedMultiplier", &UAction_DriveVehicle::MaxSpeedMultiplier)
        .def_readwrite("ReachedNodeWeighting", &UAction_DriveVehicle::ReachedNodeWeighting)
        .def_readwrite("MyVehicle", &UAction_DriveVehicle::MyVehicle)
        .def_readwrite("MoveNode", &UAction_DriveVehicle::MoveNode)
        .def_readwrite("NextMoveNode", &UAction_DriveVehicle::NextMoveNode)
        .def_readwrite("StartLoc", &UAction_DriveVehicle::StartLoc)
        .def_readwrite("VectA", &UAction_DriveVehicle::VectA)
        .def_readwrite("VectB", &UAction_DriveVehicle::VectB)
        .def_readwrite("T", &UAction_DriveVehicle::T)
        .def("StaticClass", &UAction_DriveVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("AdvanceNodes", &UAction_DriveVehicle::AdvanceNodes)
        .def("PassedNode", &UAction_DriveVehicle::PassedNode)
        .def("ReachedNode", &UAction_DriveVehicle::ReachedNode)
        .def("eventStop", &UAction_DriveVehicle::eventStop)
        .def("eventStart", &UAction_DriveVehicle::eventStart)
        .def("eventCanRun", &UAction_DriveVehicle::eventCanRun)
        .def("GetBestPatrolNode", &UAction_DriveVehicle::GetBestPatrolNode, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}