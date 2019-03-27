#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_DriveVehicle(py::module &m)
{
    py::class_< UAction_DriveVehicle,  UWillowActionSequencePawn   >(m, "UAction_DriveVehicle")
		.def_static("StaticClass", &UAction_DriveVehicle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxSpeedMultiplier", &UAction_DriveVehicle::MaxSpeedMultiplier)
        .def_readwrite("ReachedNodeWeighting", &UAction_DriveVehicle::ReachedNodeWeighting)
        .def_readwrite("MyVehicle", &UAction_DriveVehicle::MyVehicle)
        .def_readwrite("MoveNode", &UAction_DriveVehicle::MoveNode)
        .def_readwrite("NextMoveNode", &UAction_DriveVehicle::NextMoveNode)
        .def_readwrite("StartLoc", &UAction_DriveVehicle::StartLoc)
        .def_readwrite("VectA", &UAction_DriveVehicle::VectA)
        .def_readwrite("VectB", &UAction_DriveVehicle::VectB)
        .def_readwrite("T", &UAction_DriveVehicle::T)
        .def("AdvanceNodes", &UAction_DriveVehicle::AdvanceNodes)
        .def("PassedNode", &UAction_DriveVehicle::PassedNode)
        .def("ReachedNode", &UAction_DriveVehicle::ReachedNode)
        .def("eventStop", &UAction_DriveVehicle::eventStop)
        .def("eventStart", &UAction_DriveVehicle::eventStart)
        .def("eventCanRun", &UAction_DriveVehicle::eventCanRun)
        .def("GetBestPatrolNode", &UAction_DriveVehicle::GetBestPatrolNode, py::return_value_policy::reference)
          ;
}