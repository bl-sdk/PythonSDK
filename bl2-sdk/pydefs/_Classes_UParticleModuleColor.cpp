#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColor()
{
    class_< UParticleModuleColor, bases< UParticleModuleColorBase >  , boost::noncopyable>("UParticleModuleColor", no_init)
        .def_readwrite("StartColor", &UParticleModuleColor::StartColor)
        .def_readwrite("StartAlpha", &UParticleModuleColor::StartAlpha)
        .def("StaticClass", &UParticleModuleColor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}