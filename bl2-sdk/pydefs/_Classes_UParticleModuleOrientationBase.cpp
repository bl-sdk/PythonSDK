#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationBase(py::object m)
{
    py::class_< UParticleModuleOrientationBase,  UParticleModule   >(m, "UParticleModuleOrientationBase")
        .def("StaticClass", &UParticleModuleOrientationBase::StaticClass, py::return_value_policy::reference)
          ;
}