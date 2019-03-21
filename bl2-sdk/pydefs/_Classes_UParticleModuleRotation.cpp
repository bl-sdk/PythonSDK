#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation(py::object m)
{
    py::class_< UParticleModuleRotation,  UParticleModule   >(m, "UParticleModuleRotation")
        .def_readwrite("StartRotation", &UParticleModuleRotation::StartRotation)
        .def("StaticClass", &UParticleModuleRotation::StaticClass, py::return_value_policy::reference)
          ;
}