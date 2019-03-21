#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectileFromImpact()
{
    class_< UBehavior_SpawnProjectileFromImpact, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnProjectileFromImpact", no_init)
        .def_readwrite("OwnerContext", &UBehavior_SpawnProjectileFromImpact::OwnerContext)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnProjectileFromImpact::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnProjectileFromImpact::SavedReferenceName)
        .def_readwrite("ProjectileDefinition", &UBehavior_SpawnProjectileFromImpact::ProjectileDefinition)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_SpawnProjectileFromImpact::SetProjectileSequenceState)
        .def_readwrite("GearLikenessContext", &UBehavior_SpawnProjectileFromImpact::GearLikenessContext)
        .def("StaticClass", &UBehavior_SpawnProjectileFromImpact::StaticClass, return_value_policy< reference_existing_object >())
        .def("AttachProjectileToBase", &UBehavior_SpawnProjectileFromImpact::AttachProjectileToBase)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnProjectileFromImpact::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}