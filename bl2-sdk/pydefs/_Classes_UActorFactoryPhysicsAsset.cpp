#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPhysicsAsset(py::module &m)
{
    py::class_< UActorFactoryPhysicsAsset,  UActorFactory   >(m, "UActorFactoryPhysicsAsset")
		.def_static("StaticClass", &UActorFactoryPhysicsAsset::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PhysicsAsset", &UActorFactoryPhysicsAsset::PhysicsAsset)
        .def_readwrite("SkeletalMesh", &UActorFactoryPhysicsAsset::SkeletalMesh)
        .def_readwrite("InitialVelocity", &UActorFactoryPhysicsAsset::InitialVelocity)
        .def_readwrite("DrawScale3D", &UActorFactoryPhysicsAsset::DrawScale3D)
          ;
}