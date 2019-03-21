#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMaterialBase(py::object m)
{
    py::class_< UParticleModuleMaterialBase,  UParticleModule   >(m, "UParticleModuleMaterialBase")
        .def("StaticClass", &UParticleModuleMaterialBase::StaticClass, py::return_value_policy::reference)
          ;
}