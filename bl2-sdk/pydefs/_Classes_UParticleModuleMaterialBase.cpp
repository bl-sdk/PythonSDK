#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialBase()
{
    class_< UParticleModuleMaterialBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleMaterialBase", no_init)
        .def("StaticClass", &UParticleModuleMaterialBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}