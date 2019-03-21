#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleUberBase()
{
    class_< UParticleModuleUberBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleUberBase", no_init)
        .def_readwrite("RequiredModules", &UParticleModuleUberBase::RequiredModules)
        .def("StaticClass", &UParticleModuleUberBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}