#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverDensity()
{
    class_< UParticleModuleColorScaleOverDensity, bases< UParticleModuleColorBase >  , boost::noncopyable>("UParticleModuleColorScaleOverDensity", no_init)
        .def_readwrite("ColorScaleOverDensity", &UParticleModuleColorScaleOverDensity::ColorScaleOverDensity)
        .def_readwrite("AlphaScaleOverDensity", &UParticleModuleColorScaleOverDensity::AlphaScaleOverDensity)
        .def("StaticClass", &UParticleModuleColorScaleOverDensity::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}