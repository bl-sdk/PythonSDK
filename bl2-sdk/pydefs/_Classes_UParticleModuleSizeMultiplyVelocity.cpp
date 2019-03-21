#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeMultiplyVelocity()
{
    class_< UParticleModuleSizeMultiplyVelocity, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSizeMultiplyVelocity", no_init)
        .def_readwrite("VelocityMultiplier", &UParticleModuleSizeMultiplyVelocity::VelocityMultiplier)
        .def("StaticClass", &UParticleModuleSizeMultiplyVelocity::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}