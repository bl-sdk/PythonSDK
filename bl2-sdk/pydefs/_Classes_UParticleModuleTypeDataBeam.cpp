#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataBeam()
{
    class_< UParticleModuleTypeDataBeam, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleTypeDataBeam", no_init)
        .def_readwrite("BeamMethod", &UParticleModuleTypeDataBeam::BeamMethod)
        .def_readwrite("EndPointMethod", &UParticleModuleTypeDataBeam::EndPointMethod)
        .def_readwrite("Distance", &UParticleModuleTypeDataBeam::Distance)
        .def_readwrite("EndPoint", &UParticleModuleTypeDataBeam::EndPoint)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataBeam::TessellationFactor)
        .def_readwrite("EmitterStrength", &UParticleModuleTypeDataBeam::EmitterStrength)
        .def_readwrite("TargetStrength", &UParticleModuleTypeDataBeam::TargetStrength)
        .def_readwrite("EndPointDirection", &UParticleModuleTypeDataBeam::EndPointDirection)
        .def_readwrite("TextureTile", &UParticleModuleTypeDataBeam::TextureTile)
        .def("StaticClass", &UParticleModuleTypeDataBeam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}