#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_MoveToFormation(py::module &m)
{
    py::class_< UAction_MoveToFormation,  UAction_Burrow   >(m, "UAction_MoveToFormation")
		.def_static("StaticClass", &UAction_MoveToFormation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HoldDistance", &UAction_MoveToFormation::HoldDistance)
        .def_readwrite("NameTag", &UAction_MoveToFormation::NameTag)
        .def_readwrite("MyFormation", &UAction_MoveToFormation::MyFormation)
        .def("HalfExposed", &UAction_MoveToFormation::HalfExposed)
        .def("RotatedEnough", &UAction_MoveToFormation::RotatedEnough)
        .def("CloseEnough", &UAction_MoveToFormation::CloseEnough)
        .def("CanBeMagnetized", &UAction_MoveToFormation::CanBeMagnetized)
        .def("OwnerIsMoving", &UAction_MoveToFormation::OwnerIsMoving)
        .def("SetFacingPolicy", &UAction_MoveToFormation::SetFacingPolicy)
        .def("CheckFormation", &UAction_MoveToFormation::CheckFormation)
        .def("GetLeaderPawn", &UAction_MoveToFormation::GetLeaderPawn, py::return_value_policy::reference)
        .def("CanFollowOwner", &UAction_MoveToFormation::CanFollowOwner)
        .def("CheckStateTransition", &UAction_MoveToFormation::CheckStateTransition)
        .def("eventUpdate", &UAction_MoveToFormation::eventUpdate)
        .def("eventStop", &UAction_MoveToFormation::eventStop)
        .def("eventStart", &UAction_MoveToFormation::eventStart)
        .def("eventCanRun", &UAction_MoveToFormation::eventCanRun)
          ;
}