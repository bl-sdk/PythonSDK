#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVDirect()
{
    class_< UParticleModuleSubUVDirect, bases< UParticleModuleSubUVBase >  , boost::noncopyable>("UParticleModuleSubUVDirect", no_init)
        .def_readwrite("SubUVPosition", &UParticleModuleSubUVDirect::SubUVPosition)
        .def_readwrite("SubUVSize", &UParticleModuleSubUVDirect::SubUVSize)
        .def("StaticClass", &UParticleModuleSubUVDirect::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}