#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataMeshPhysX(py::module &m)
{
    py::class_< UParticleModuleTypeDataMeshPhysX,  UParticleModuleTypeDataMesh   >(m, "UParticleModuleTypeDataMeshPhysX")
        .def_readwrite("PhysXParSys", &UParticleModuleTypeDataMeshPhysX::PhysXParSys)
        .def_readwrite("PhysXRotationMethod", &UParticleModuleTypeDataMeshPhysX::PhysXRotationMethod)
        .def_readwrite("FluidRotationCoefficient", &UParticleModuleTypeDataMeshPhysX::FluidRotationCoefficient)
        .def_readwrite("VerticalLod", &UParticleModuleTypeDataMeshPhysX::VerticalLod)
        .def_readwrite("ZOffset", &UParticleModuleTypeDataMeshPhysX::ZOffset)
        .def("StaticClass", &UParticleModuleTypeDataMeshPhysX::StaticClass, py::return_value_policy::reference)
          ;
}