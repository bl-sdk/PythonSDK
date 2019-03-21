#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleKillHeight()
{
    class_< UParticleModuleKillHeight, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleKillHeight", no_init)
        .def_readwrite("Height", &UParticleModuleKillHeight::Height)
        .def("StaticClass", &UParticleModuleKillHeight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}