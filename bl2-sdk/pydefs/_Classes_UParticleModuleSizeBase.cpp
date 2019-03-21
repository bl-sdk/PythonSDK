#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeBase()
{
    class_< UParticleModuleSizeBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSizeBase", no_init)
        .def("StaticClass", &UParticleModuleSizeBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}