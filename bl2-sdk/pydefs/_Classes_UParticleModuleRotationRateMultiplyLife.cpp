#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateMultiplyLife(py::module &m)
{
    py::class_< UParticleModuleRotationRateMultiplyLife,  UParticleModuleRotationRateBase   >(m, "UParticleModuleRotationRateMultiplyLife")
		.def_static("StaticClass", &UParticleModuleRotationRateMultiplyLife::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LifeMultiplier", &UParticleModuleRotationRateMultiplyLife::LifeMultiplier)
          ;
}