#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleColorBase()
{
    class_< UParticleModuleColorBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleColorBase", no_init)
        .def("StaticClass", &UParticleModuleColorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}