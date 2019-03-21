#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectile(py::object m)
{
    py::class_< UBehavior_SpawnProjectile,  UBehaviorBase   >(m, "UBehavior_SpawnProjectile")
        .def_readwrite("OwnerContext", &UBehavior_SpawnProjectile::OwnerContext)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnProjectile::AttachmentPointName)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnProjectile::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnProjectile::SavedReferenceName)
        .def_readwrite("NumProjectilesFormula", &UBehavior_SpawnProjectile::NumProjectilesFormula)
        .def_readwrite("NumProjectiles", &UBehavior_SpawnProjectile::NumProjectiles)
        .def_readwrite("SpawnDirection", &UBehavior_SpawnProjectile::SpawnDirection)
        .def_readwrite("SelectionBehavior", &UBehavior_SpawnProjectile::SelectionBehavior)
        .def_readwrite("SpawnDistributionType", &UBehavior_SpawnProjectile::SpawnDistributionType)
        .def_readwrite("FireSocketSelection", &UBehavior_SpawnProjectile::FireSocketSelection)
        .def_readwrite("ProjectileDefinition", &UBehavior_SpawnProjectile::ProjectileDefinition)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnProjectile::RelativeLocation)
        .def_readwrite("DirectionConeMinSize", &UBehavior_SpawnProjectile::DirectionConeMinSize)
        .def_readwrite("DirectionConeSize", &UBehavior_SpawnProjectile::DirectionConeSize)
        .def_readwrite("ChildProjectileBaseValues", &UBehavior_SpawnProjectile::ChildProjectileBaseValues)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_SpawnProjectile::SetProjectileSequenceState)
        .def_readwrite("SpawnDirectionOverride", &UBehavior_SpawnProjectile::SpawnDirectionOverride)
        .def_readwrite("SpawnMaterialOverride", &UBehavior_SpawnProjectile::SpawnMaterialOverride)
        .def_readwrite("FireLocationSocketNames", &UBehavior_SpawnProjectile::FireLocationSocketNames)
        .def_readwrite("TimeBetweenShots", &UBehavior_SpawnProjectile::TimeBetweenShots)
        .def_readwrite("DrawScaleOverride", &UBehavior_SpawnProjectile::DrawScaleOverride)
        .def_readwrite("GearLikenessContext", &UBehavior_SpawnProjectile::GearLikenessContext)
        .def_readwrite("FireLocationSocketsRemaining", &UBehavior_SpawnProjectile::FireLocationSocketsRemaining)
        .def_readwrite("NumShotsFired", &UBehavior_SpawnProjectile::NumShotsFired)
        .def("StaticClass", &UBehavior_SpawnProjectile::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_SpawnProjectile::PublishBehaviorOutput)
        .def("StaticGetWorldBodyViewLocation", &UBehavior_SpawnProjectile::StaticGetWorldBodyViewLocation)
        .def("StaticGetChildProjectilePosition", &UBehavior_SpawnProjectile::StaticGetChildProjectilePosition)
        .def("StaticGetChildProjectileDirection", &UBehavior_SpawnProjectile::StaticGetChildProjectileDirection)
        .def("SpawnChildProjectiles", &UBehavior_SpawnProjectile::SpawnChildProjectiles)
        .def("CalculateConeVector", &UBehavior_SpawnProjectile::CalculateConeVector)
        .def("PerformMaterialOverride", &UBehavior_SpawnProjectile::PerformMaterialOverride)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnProjectile::ApplyBehaviorToContext)
          ;
}