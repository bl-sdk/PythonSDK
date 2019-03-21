#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPawnSnapshotRecord()
{
    class_< UWillowPawnSnapshotRecord, bases< UGearboxPawnSnapshotRecord >  , boost::noncopyable>("UWillowPawnSnapshotRecord", no_init)
        .def_readwrite("MyWillowPawnName", &UWillowPawnSnapshotRecord::MyWillowPawnName)
        .def_readwrite("MyWeaponName", &UWillowPawnSnapshotRecord::MyWeaponName)
        .def_readwrite("MyDrivenVehicleName", &UWillowPawnSnapshotRecord::MyDrivenVehicleName)
        .def_readwrite("FacingPolicy", &UWillowPawnSnapshotRecord::FacingPolicy)
        .def_readwrite("MyPhysics", &UWillowPawnSnapshotRecord::MyPhysics)
        .def_readwrite("MyRootMotionMode", &UWillowPawnSnapshotRecord::MyRootMotionMode)
        .def_readwrite("TerritoryZones", &UWillowPawnSnapshotRecord::TerritoryZones)
        .def_readwrite("BestTargetData", &UWillowPawnSnapshotRecord::BestTargetData)
        .def_readwrite("BestTargetLocation", &UWillowPawnSnapshotRecord::BestTargetLocation)
        .def_readwrite("Destination", &UWillowPawnSnapshotRecord::Destination)
        .def_readwrite("SpaceBases", &UWillowPawnSnapshotRecord::SpaceBases)
        .def_readwrite("ExperienceLevel", &UWillowPawnSnapshotRecord::ExperienceLevel)
        .def_readwrite("GameStage", &UWillowPawnSnapshotRecord::GameStage)
        .def_readwrite("AwesomeLevel", &UWillowPawnSnapshotRecord::AwesomeLevel)
        .def_readwrite("CurHealth", &UWillowPawnSnapshotRecord::CurHealth)
        .def_readwrite("CurShield", &UWillowPawnSnapshotRecord::CurShield)
        .def_readwrite("MaxShield", &UWillowPawnSnapshotRecord::MaxShield)
        .def_readwrite("WeaponLevel", &UWillowPawnSnapshotRecord::WeaponLevel)
        .def_readwrite("WeaponDamage", &UWillowPawnSnapshotRecord::WeaponDamage)
        .def_readwrite("PathState", &UWillowPawnSnapshotRecord::PathState)
        .def_readwrite("PathFailTime", &UWillowPawnSnapshotRecord::PathFailTime)
        .def_readwrite("PathFailCount", &UWillowPawnSnapshotRecord::PathFailCount)
        .def_readwrite("PathFailName", &UWillowPawnSnapshotRecord::PathFailName)
        .def_readwrite("TargetVehiclePursuitPoints", &UWillowPawnSnapshotRecord::TargetVehiclePursuitPoints)
        .def_readwrite("TargetVehicleSelectedPursuitPointNdx", &UWillowPawnSnapshotRecord::TargetVehicleSelectedPursuitPointNdx)
        .def_readwrite("ExtraDebugItems", &UWillowPawnSnapshotRecord::ExtraDebugItems)
        .def("StaticClass", &UWillowPawnSnapshotRecord::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}