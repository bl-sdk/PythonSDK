#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeMultiplyLife()
{
    class_< UParticleModuleSizeMultiplyLife, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSizeMultiplyLife", no_init)
        .def_readwrite("LifeMultiplier", &UParticleModuleSizeMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleSizeMultiplyLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}