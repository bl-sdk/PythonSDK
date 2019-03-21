#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleSystemReplay()
{
    class_< UParticleSystemReplay, bases< UObject >  , boost::noncopyable>("UParticleSystemReplay", no_init)
        .def_readwrite("ClipIDNumber", &UParticleSystemReplay::ClipIDNumber)
        .def_readwrite("Frames", &UParticleSystemReplay::Frames)
        .def("StaticClass", &UParticleSystemReplay::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}