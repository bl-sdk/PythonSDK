#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRate(py::module &m)
{
    py::class_< UParticleModuleRotationRate,  UParticleModule   >(m, "UParticleModuleRotationRate")
        .def_readwrite("StartRotationRate", &UParticleModuleRotationRate::StartRotationRate)
        .def("StaticClass", &UParticleModuleRotationRate::StaticClass, py::return_value_policy::reference)
          ;
}