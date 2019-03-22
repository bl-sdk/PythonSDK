#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialByParameter(py::module &m)
{
    py::class_< UParticleModuleMaterialByParameter,  UParticleModuleMaterialBase   >(m, "UParticleModuleMaterialByParameter")
        .def_readwrite("MaterialParameters", &UParticleModuleMaterialByParameter::MaterialParameters)
        .def_readwrite("DefaultMaterials", &UParticleModuleMaterialByParameter::DefaultMaterials)
        .def("StaticClass", &UParticleModuleMaterialByParameter::StaticClass, py::return_value_policy::reference)
          ;
}