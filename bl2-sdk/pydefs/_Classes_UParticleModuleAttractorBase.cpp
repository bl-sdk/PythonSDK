#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorBase()
{
    class_< UParticleModuleAttractorBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleAttractorBase", no_init)
        .def("StaticClass", &UParticleModuleAttractorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}