#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALadderVolume()
{
    class_< ALadderVolume, bases< APhysicsVolume >  , boost::noncopyable>("ALadderVolume", no_init)
        .def_readwrite("WallDir", &ALadderVolume::WallDir)
        .def_readwrite("LookDir", &ALadderVolume::LookDir)
        .def_readwrite("ClimbDir", &ALadderVolume::ClimbDir)
        .def_readwrite("LadderList", &ALadderVolume::LadderList)
        .def_readwrite("PendingClimber", &ALadderVolume::PendingClimber)
        .def_readwrite("WallDirArrow", &ALadderVolume::WallDirArrow)
        .def("StaticClass", &ALadderVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPhysicsChangedFor", &ALadderVolume::eventPhysicsChangedFor)
        .def("eventPawnLeavingVolume", &ALadderVolume::eventPawnLeavingVolume)
        .def("eventPawnEnteredVolume", &ALadderVolume::eventPawnEnteredVolume)
        .def("InUse", &ALadderVolume::InUse)
        .def("eventPostBeginPlay", &ALadderVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}