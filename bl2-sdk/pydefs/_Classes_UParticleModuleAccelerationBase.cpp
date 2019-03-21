#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAccelerationBase(py::object m)
{
    py::class_< UParticleModuleAccelerationBase,  UParticleModule   >(m, "UParticleModuleAccelerationBase")
        .def("StaticClass", &UParticleModuleAccelerationBase::StaticClass, py::return_value_policy::reference)
          ;
}