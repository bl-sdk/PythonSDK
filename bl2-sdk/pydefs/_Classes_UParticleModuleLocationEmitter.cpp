#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationEmitter()
{
    class_< UParticleModuleLocationEmitter, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationEmitter", no_init)
        .def_readwrite("EmitterName", &UParticleModuleLocationEmitter::EmitterName)
        .def_readwrite("SelectionMethod", &UParticleModuleLocationEmitter::SelectionMethod)
        .def_readwrite("InheritSourceVelocityScale", &UParticleModuleLocationEmitter::InheritSourceVelocityScale)
        .def_readwrite("InheritSourceRotationScale", &UParticleModuleLocationEmitter::InheritSourceRotationScale)
        .def("StaticClass", &UParticleModuleLocationEmitter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}