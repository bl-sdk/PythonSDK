#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBoneSocket()
{
    class_< UParticleModuleLocationBoneSocket, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationBoneSocket", no_init)
        .def_readwrite("SourceType", &UParticleModuleLocationBoneSocket::SourceType)
        .def_readwrite("SelectionMethod", &UParticleModuleLocationBoneSocket::SelectionMethod)
        .def_readwrite("UniversalOffset", &UParticleModuleLocationBoneSocket::UniversalOffset)
        .def_readwrite("SourceLocations", &UParticleModuleLocationBoneSocket::SourceLocations)
        .def_readwrite("SkelMeshActorParamName", &UParticleModuleLocationBoneSocket::SkelMeshActorParamName)
        .def("StaticClass", &UParticleModuleLocationBoneSocket::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}