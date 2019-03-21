#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVBase()
{
    class_< UParticleModuleSubUVBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSubUVBase", no_init)
        .def("StaticClass", &UParticleModuleSubUVBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}