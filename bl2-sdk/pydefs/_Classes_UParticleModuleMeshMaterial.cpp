#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshMaterial(py::module &m)
{
    py::class_< UParticleModuleMeshMaterial,  UParticleModule   >(m, "UParticleModuleMeshMaterial")
        .def_readwrite("MeshMaterials", &UParticleModuleMeshMaterial::MeshMaterials)
        .def("StaticClass", &UParticleModuleMeshMaterial::StaticClass, py::return_value_policy::reference)
          ;
}