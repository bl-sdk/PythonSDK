#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeMultiplyLife()
{
    py::class_< UParticleModuleSizeMultiplyLife,  UParticleModuleSizeBase   >("UParticleModuleSizeMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleSizeMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleSizeMultiplyLife::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}