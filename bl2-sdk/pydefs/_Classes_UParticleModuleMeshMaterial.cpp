#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshMaterial()
{
    class_< UParticleModuleMeshMaterial, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleMeshMaterial", no_init)
        .def_readwrite("MeshMaterials", &UParticleModuleMeshMaterial::MeshMaterials)
        .def("StaticClass", &UParticleModuleMeshMaterial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}