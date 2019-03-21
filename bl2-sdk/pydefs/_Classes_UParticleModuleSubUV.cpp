#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUV()
{
    class_< UParticleModuleSubUV, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSubUV", no_init)
        .def_readwrite("SubImageIndex", &UParticleModuleSubUV::SubImageIndex)
        .def("StaticClass", &UParticleModuleSubUV::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}