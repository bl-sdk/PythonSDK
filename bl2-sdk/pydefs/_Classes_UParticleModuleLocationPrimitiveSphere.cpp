#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveSphere()
{
    class_< UParticleModuleLocationPrimitiveSphere, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationPrimitiveSphere", no_init)
        .def_readwrite("StartRadius", &UParticleModuleLocationPrimitiveSphere::StartRadius)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
        .def("StaticClass", &UParticleModuleLocationPrimitiveSphere::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}