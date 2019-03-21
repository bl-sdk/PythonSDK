#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataMeshPhysX()
{
    class_< UParticleModuleTypeDataMeshPhysX, bases< UParticleModuleTypeDataMesh >  , boost::noncopyable>("UParticleModuleTypeDataMeshPhysX", no_init)
        .def_readwrite("PhysXParSys", &UParticleModuleTypeDataMeshPhysX::PhysXParSys)
        .def_readwrite("PhysXRotationMethod", &UParticleModuleTypeDataMeshPhysX::PhysXRotationMethod)
        .def_readwrite("FluidRotationCoefficient", &UParticleModuleTypeDataMeshPhysX::FluidRotationCoefficient)
        .def_readwrite("VerticalLod", &UParticleModuleTypeDataMeshPhysX::VerticalLod)
        .def_readwrite("ZOffset", &UParticleModuleTypeDataMeshPhysX::ZOffset)
        .def("StaticClass", &UParticleModuleTypeDataMeshPhysX::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}