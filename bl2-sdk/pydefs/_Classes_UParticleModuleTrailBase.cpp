#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailBase()
{
    class_< UParticleModuleTrailBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleTrailBase", no_init)
        .def("StaticClass", &UParticleModuleTrailBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}