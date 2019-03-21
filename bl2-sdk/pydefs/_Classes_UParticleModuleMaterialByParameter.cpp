#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialByParameter()
{
    class_< UParticleModuleMaterialByParameter, bases< UParticleModuleMaterialBase >  , boost::noncopyable>("UParticleModuleMaterialByParameter", no_init)
        .def_readwrite("MaterialParameters", &UParticleModuleMaterialByParameter::MaterialParameters)
        .def_readwrite("DefaultMaterials", &UParticleModuleMaterialByParameter::DefaultMaterials)
        .def("StaticClass", &UParticleModuleMaterialByParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}