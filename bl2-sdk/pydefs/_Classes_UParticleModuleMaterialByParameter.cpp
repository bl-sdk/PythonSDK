#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialByParameter()
{
    py::class_< UParticleModuleMaterialByParameter,  UParticleModuleMaterialBase   >("UParticleModuleMaterialByParameter")
        .def_readwrite("MaterialParameters", &UParticleModuleMaterialByParameter::MaterialParameters)
        .def_readwrite("DefaultMaterials", &UParticleModuleMaterialByParameter::DefaultMaterials)
        .def("StaticClass", &UParticleModuleMaterialByParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}