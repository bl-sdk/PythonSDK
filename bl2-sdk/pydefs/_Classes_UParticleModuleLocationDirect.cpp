#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationDirect()
{
    class_< UParticleModuleLocationDirect, bases< UParticleModuleLocationBase >  , boost::noncopyable>("UParticleModuleLocationDirect", no_init)
        .def_readwrite("Location", &UParticleModuleLocationDirect::Location)
        .def_readwrite("LocationOffset", &UParticleModuleLocationDirect::LocationOffset)
        .def_readwrite("ScaleFactor", &UParticleModuleLocationDirect::ScaleFactor)
        .def_readwrite("Direction", &UParticleModuleLocationDirect::Direction)
        .def("StaticClass", &UParticleModuleLocationDirect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}