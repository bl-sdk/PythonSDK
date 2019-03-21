#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColorScaleOverLife()
{
    class_< UParticleModuleColorScaleOverLife, bases< UParticleModuleColorBase >  , boost::noncopyable>("UParticleModuleColorScaleOverLife", no_init)
        .def_readwrite("ColorScaleOverLife", &UParticleModuleColorScaleOverLife::ColorScaleOverLife)
        .def_readwrite("AlphaScaleOverLife", &UParticleModuleColorScaleOverLife::AlphaScaleOverLife)
        .def("StaticClass", &UParticleModuleColorScaleOverLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}