#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationRateBase(py::object m)
{
    py::class_< UParticleModuleRotationRateBase,  UParticleModule   >(m, "UParticleModuleRotationRateBase")
        .def("StaticClass", &UParticleModuleRotationRateBase::StaticClass, py::return_value_policy::reference)
          ;
}