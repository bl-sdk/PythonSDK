#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleSeatInstance()
{
    class_< FVehicleSeatInstance >("FVehicleSeatInstance", no_init)
        .def_readwrite("StoragePawn", &FVehicleSeatInstance::StoragePawn)
        .def_readwrite("LastStoragePawn", &FVehicleSeatInstance::LastStoragePawn)
        .def_readwrite("SeatPawn", &FVehicleSeatInstance::SeatPawn)
        .def_readwrite("Gun", &FVehicleSeatInstance::Gun)
        .def_readwrite("GunMesh", &FVehicleSeatInstance::GunMesh)
        .def_readwrite("GunDefinition", &FVehicleSeatInstance::GunDefinition)
        .def_readwrite("BarrelIndex", &FVehicleSeatInstance::BarrelIndex)
        .def_readwrite("WeaponRotationName", &FVehicleSeatInstance::WeaponRotationName)
        .def_readwrite("FlashLocationName", &FVehicleSeatInstance::FlashLocationName)
        .def_readwrite("FlashCountName", &FVehicleSeatInstance::FlashCountName)
        .def_readwrite("FiringModeName", &FVehicleSeatInstance::FiringModeName)
        .def_readwrite("AttachedWeaponName", &FVehicleSeatInstance::AttachedWeaponName)
        .def_readwrite("TurretControllers", &FVehicleSeatInstance::TurretControllers)
        .def_readwrite("WeaponFireSMD", &FVehicleSeatInstance::WeaponFireSMD)
        .def_readwrite("OldPositions", &FVehicleSeatInstance::OldPositions)
        .def_readwrite("SmoothedCameraOffset", &FVehicleSeatInstance::SmoothedCameraOffset)
        .def_readwrite("IncomingSeatIndex", &FVehicleSeatInstance::IncomingSeatIndex)
        .def_readwrite("SeatLockTime", &FVehicleSeatInstance::SeatLockTime)
  ;
}