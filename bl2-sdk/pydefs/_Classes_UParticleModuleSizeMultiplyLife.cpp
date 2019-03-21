#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeMultiplyLife(py::object m)
{
    py::class_< UParticleModuleSizeMultiplyLife,  UParticleModuleSizeBase   >(m, "UParticleModuleSizeMultiplyLife")
        .def_readwrite("LifeMultiplier", &UParticleModuleSizeMultiplyLife::LifeMultiplier)
        .def("StaticClass", &UParticleModuleSizeMultiplyLife::StaticClass, py::return_value_policy::reference)
          ;
}