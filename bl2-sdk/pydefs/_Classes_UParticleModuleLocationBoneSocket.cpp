#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBoneSocket(py::object m)
{
    py::class_< UParticleModuleLocationBoneSocket,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationBoneSocket")
        .def_readwrite("SourceType", &UParticleModuleLocationBoneSocket::SourceType)
        .def_readwrite("SelectionMethod", &UParticleModuleLocationBoneSocket::SelectionMethod)
        .def_readwrite("UniversalOffset", &UParticleModuleLocationBoneSocket::UniversalOffset)
        .def_readwrite("SourceLocations", &UParticleModuleLocationBoneSocket::SourceLocations)
        .def_readwrite("SkelMeshActorParamName", &UParticleModuleLocationBoneSocket::SkelMeshActorParamName)
        .def("StaticClass", &UParticleModuleLocationBoneSocket::StaticClass, py::return_value_policy::reference)
          ;
}