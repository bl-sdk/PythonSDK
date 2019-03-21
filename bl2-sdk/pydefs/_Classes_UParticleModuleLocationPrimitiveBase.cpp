#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveBase()
{
    class_< UParticleModuleLocationPrimitiveBase, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationPrimitiveBase", no_init)
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
        .def("StaticClass", &UParticleModuleLocationPrimitiveBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}