#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventGenerator()
{
    class_< UParticleModuleEventGenerator, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleEventGenerator", no_init)
        .def_readwrite("Events", &UParticleModuleEventGenerator::Events)
        .def("StaticClass", &UParticleModuleEventGenerator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}