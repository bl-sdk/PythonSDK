#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataMesh(py::module &m)
{
    py::class_< UParticleModuleTypeDataMesh,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataMesh")
		.def_static("StaticClass", &UParticleModuleTypeDataMesh::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Mesh", &UParticleModuleTypeDataMesh::Mesh)
        .def_readwrite("MeshAlignment", &UParticleModuleTypeDataMesh::MeshAlignment)
        .def_readwrite("AxisLockOption", &UParticleModuleTypeDataMesh::AxisLockOption)
        .def_readwrite("CameraFacingUpAxisOption", &UParticleModuleTypeDataMesh::CameraFacingUpAxisOption)
        .def_readwrite("CameraFacingOption", &UParticleModuleTypeDataMesh::CameraFacingOption)
        .def_readwrite("Pitch", &UParticleModuleTypeDataMesh::Pitch)
        .def_readwrite("Roll", &UParticleModuleTypeDataMesh::Roll)
        .def_readwrite("Yaw", &UParticleModuleTypeDataMesh::Yaw)
          ;
}