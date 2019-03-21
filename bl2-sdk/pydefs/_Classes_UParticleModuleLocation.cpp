#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleLocation()
{
    class_< UParticleModuleLocation, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleLocation", no_init)
        .def_readwrite("StartLocation", &UParticleModuleLocation::StartLocation)
        .def("StaticClass", &UParticleModuleLocation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}