#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColorOverLife()
{
    class_< UParticleModuleColorOverLife, bases< UParticleModuleColorBase >  , boost::noncopyable>("UParticleModuleColorOverLife", no_init)
        .def_readwrite("ColorOverLife", &UParticleModuleColorOverLife::ColorOverLife)
        .def_readwrite("AlphaOverLife", &UParticleModuleColorOverLife::AlphaOverLife)
        .def("StaticClass", &UParticleModuleColorOverLife::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}