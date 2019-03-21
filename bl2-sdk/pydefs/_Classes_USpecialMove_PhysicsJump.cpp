#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PhysicsJump()
{
    py::class_< USpecialMove_PhysicsJump,  UWillowAnimDefinition   >("USpecialMove_PhysicsJump")
        .def_readwrite("AnimIdle", &USpecialMove_PhysicsJump::AnimIdle)
        .def_readwrite("AnimLand", &USpecialMove_PhysicsJump::AnimLand)
        .def_readwrite("BodyTag", &USpecialMove_PhysicsJump::BodyTag)
        .def("StaticClass", &USpecialMove_PhysicsJump::StaticClass, py::return_value_policy::reference)
        .def("PlayLand", &USpecialMove_PhysicsJump::PlayLand)
        .def("PlayIdle", &USpecialMove_PhysicsJump::PlayIdle)
        .def("GetIdleLength", &USpecialMove_PhysicsJump::GetIdleLength)
        .def("NextEdgeIsJump", &USpecialMove_PhysicsJump::NextEdgeIsJump)
        .def("GetJumpIndex", &USpecialMove_PhysicsJump::GetJumpIndex)
        .def("eventAnimFinished", &USpecialMove_PhysicsJump::eventAnimFinished)
        .def("eventClientFinished", &USpecialMove_PhysicsJump::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_PhysicsJump::eventClientStarted)
        .def("eventServerFinished", &USpecialMove_PhysicsJump::eventServerFinished)
        .def("eventServerStarted", &USpecialMove_PhysicsJump::eventServerStarted)
        .def("OnStartLand", &USpecialMove_PhysicsJump::OnStartLand)
        .def("OnStartIdle", &USpecialMove_PhysicsJump::OnStartIdle)
        .staticmethod("StaticClass")
  ;
}