#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbit(py::object m)
{
    py::class_< UParticleModuleOrbit,  UParticleModule   >(m, "UParticleModuleOrbit")
        .def_readwrite("ChainMode", &UParticleModuleOrbit::ChainMode)
        .def_readwrite("OffsetAmount", &UParticleModuleOrbit::OffsetAmount)
        .def_readwrite("OffsetOptions", &UParticleModuleOrbit::OffsetOptions)
        .def_readwrite("RotationAmount", &UParticleModuleOrbit::RotationAmount)
        .def_readwrite("RotationOptions", &UParticleModuleOrbit::RotationOptions)
        .def_readwrite("RotationRateAmount", &UParticleModuleOrbit::RotationRateAmount)
        .def_readwrite("RotationRateOptions", &UParticleModuleOrbit::RotationRateOptions)
        .def("StaticClass", &UParticleModuleOrbit::StaticClass, py::return_value_policy::reference)
          ;
}