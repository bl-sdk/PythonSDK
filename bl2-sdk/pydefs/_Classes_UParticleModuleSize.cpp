#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSize()
{
    class_< UParticleModuleSize, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSize", no_init)
        .def_readwrite("StartSize", &UParticleModuleSize::StartSize)
        .def("StaticClass", &UParticleModuleSize::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}