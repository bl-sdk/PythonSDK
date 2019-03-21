#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation()
{
    class_< UParticleModuleMeshRotation, bases< UParticleModuleRotationBase >  , boost::noncopyable>("UParticleModuleMeshRotation", no_init)
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
        .def("StaticClass", &UParticleModuleMeshRotation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}