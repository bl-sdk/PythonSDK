#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationBase(py::object m)
{
    py::class_< UParticleModuleRotationBase,  UParticleModule   >(m, "UParticleModuleRotationBase")
        .def("StaticClass", &UParticleModuleRotationBase::StaticClass, py::return_value_policy::reference)
          ;
}