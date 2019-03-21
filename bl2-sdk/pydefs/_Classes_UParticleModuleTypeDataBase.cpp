#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataBase()
{
    class_< UParticleModuleTypeDataBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleTypeDataBase", no_init)
        .def("StaticClass", &UParticleModuleTypeDataBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}