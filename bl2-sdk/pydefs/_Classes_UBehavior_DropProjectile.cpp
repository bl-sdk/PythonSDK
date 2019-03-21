#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DropProjectile()
{
    class_< UBehavior_DropProjectile, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DropProjectile", no_init)
        .def_readwrite("InstanceDataName", &UBehavior_DropProjectile::InstanceDataName)
        .def_readwrite("ChildProjectileBaseValues", &UBehavior_DropProjectile::ChildProjectileBaseValues)
        .def_readwrite("ProjectileDef", &UBehavior_DropProjectile::ProjectileDef)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_DropProjectile::SetProjectileSequenceState)
        .def("StaticClass", &UBehavior_DropProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DropProjectile::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}