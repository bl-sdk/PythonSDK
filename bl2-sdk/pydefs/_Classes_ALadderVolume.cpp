#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALadderVolume(py::object m)
{
    py::class_< ALadderVolume,  APhysicsVolume   >(m, "ALadderVolume")
        .def_readwrite("WallDir", &ALadderVolume::WallDir)
        .def_readwrite("LookDir", &ALadderVolume::LookDir)
        .def_readwrite("ClimbDir", &ALadderVolume::ClimbDir)
        .def_readwrite("LadderList", &ALadderVolume::LadderList)
        .def_readwrite("PendingClimber", &ALadderVolume::PendingClimber)
        .def_readwrite("WallDirArrow", &ALadderVolume::WallDirArrow)
        .def("StaticClass", &ALadderVolume::StaticClass, py::return_value_policy::reference)
        .def("eventPhysicsChangedFor", &ALadderVolume::eventPhysicsChangedFor)
        .def("eventPawnLeavingVolume", &ALadderVolume::eventPawnLeavingVolume)
        .def("eventPawnEnteredVolume", &ALadderVolume::eventPawnEnteredVolume)
        .def("InUse", &ALadderVolume::InUse)
        .def("eventPostBeginPlay", &ALadderVolume::eventPostBeginPlay)
          ;
}