#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataApex()
{
    class_< UParticleModuleTypeDataApex, bases< UParticleModuleTypeDataBase >  , boost::noncopyable>("UParticleModuleTypeDataApex", no_init)
        .def_readwrite("ApexIOFX", &UParticleModuleTypeDataApex::ApexIOFX)
        .def_readwrite("ApexEmitter", &UParticleModuleTypeDataApex::ApexEmitter)
        .def("StaticClass", &UParticleModuleTypeDataApex::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}