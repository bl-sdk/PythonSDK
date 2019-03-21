#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColorByParameter()
{
    class_< UParticleModuleColorByParameter, bases< UParticleModuleColorBase >  , boost::noncopyable>("UParticleModuleColorByParameter", no_init)
        .def_readwrite("ColorParam", &UParticleModuleColorByParameter::ColorParam)
        .def_readwrite("DefaultColor", &UParticleModuleColorByParameter::DefaultColor)
        .def("StaticClass", &UParticleModuleColorByParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}