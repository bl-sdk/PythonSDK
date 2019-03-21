#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModule()
{
    class_< UParticleModule, bases< UObject >  , boost::noncopyable>("UParticleModule", no_init)
        .def_readwrite("LODValidity", &UParticleModule::LODValidity)
        .def("StaticClass", &UParticleModule::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}