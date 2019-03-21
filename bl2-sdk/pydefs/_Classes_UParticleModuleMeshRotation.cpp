#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotation(py::object m)
{
    py::class_< UParticleModuleMeshRotation,  UParticleModuleRotationBase   >(m, "UParticleModuleMeshRotation")
        .def_readwrite("StartRotation", &UParticleModuleMeshRotation::StartRotation)
        .def("StaticClass", &UParticleModuleMeshRotation::StaticClass, py::return_value_policy::reference)
          ;
}