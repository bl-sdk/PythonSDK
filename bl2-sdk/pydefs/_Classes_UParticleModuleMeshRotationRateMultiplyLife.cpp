#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateMultiplyLife(py::object m)
{
    py::class_< UParticleModuleMeshRotationRateMultiplyLife,  UParticleModuleRotationRateBase   >(m, "UParticleModuleMeshRotationRateMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleMeshRotationRateMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleMeshRotationRateMultiplyLife::StaticClass, py::return_value_policy::reference)
          ;
}