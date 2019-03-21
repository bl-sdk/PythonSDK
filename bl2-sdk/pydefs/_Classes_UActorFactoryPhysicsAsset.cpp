#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryPhysicsAsset()
{
    class_< UActorFactoryPhysicsAsset, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryPhysicsAsset", no_init)
        .def_readwrite("PhysicsAsset", &UActorFactoryPhysicsAsset::PhysicsAsset)
        .def_readwrite("SkeletalMesh", &UActorFactoryPhysicsAsset::SkeletalMesh)
        .def_readwrite("InitialVelocity", &UActorFactoryPhysicsAsset::InitialVelocity)
        .def_readwrite("DrawScale3D", &UActorFactoryPhysicsAsset::DrawScale3D)
        .def("StaticClass", &UActorFactoryPhysicsAsset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}