#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataMesh()
{
    class_< UParticleModuleTypeDataMesh, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataMesh", no_init)
        .def_readwrite("Mesh", &UParticleModuleTypeDataMesh::Mesh)
        .def_readwrite("MeshAlignment", &UParticleModuleTypeDataMesh::MeshAlignment)
        .def_readwrite("AxisLockOption", &UParticleModuleTypeDataMesh::AxisLockOption)
        .def_readwrite("CameraFacingUpAxisOption", &UParticleModuleTypeDataMesh::CameraFacingUpAxisOption)
        .def_readwrite("CameraFacingOption", &UParticleModuleTypeDataMesh::CameraFacingOption)
        .def_readwrite("Pitch", &UParticleModuleTypeDataMesh::Pitch)
        .def_readwrite("Roll", &UParticleModuleTypeDataMesh::Roll)
        .def_readwrite("Yaw", &UParticleModuleTypeDataMesh::Yaw)
        .def("StaticClass", &UParticleModuleTypeDataMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}