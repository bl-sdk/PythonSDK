#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleEventBase()
{
    class_< UParticleModuleEventBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleEventBase", no_init)
        .def("StaticClass", &UParticleModuleEventBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}