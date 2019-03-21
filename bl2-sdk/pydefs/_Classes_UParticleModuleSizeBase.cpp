#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeBase(py::object m)
{
    py::class_< UParticleModuleSizeBase,  UParticleModule   >(m, "UParticleModuleSizeBase")
        .def("StaticClass", &UParticleModuleSizeBase::StaticClass, py::return_value_policy::reference)
          ;
}