#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterBase()
{
    class_< UParticleModuleParameterBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleParameterBase", no_init)
        .def("StaticClass", &UParticleModuleParameterBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}