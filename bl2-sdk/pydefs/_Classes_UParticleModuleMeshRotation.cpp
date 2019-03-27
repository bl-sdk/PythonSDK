#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation(py::module &m)
{
    py::class_< UParticleModuleMeshRotation,  UParticleModuleRotationBase   >(m, "UParticleModuleMeshRotation")
		.def_static("StaticClass", &UParticleModuleMeshRotation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
          ;
}