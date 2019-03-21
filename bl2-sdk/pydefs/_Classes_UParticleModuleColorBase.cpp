#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorBase(py::object m)
{
    py::class_< UParticleModuleColorBase,  UParticleModule   >(m, "UParticleModuleColorBase")
        .def("StaticClass", &UParticleModuleColorBase::StaticClass, py::return_value_policy::reference)
          ;
}