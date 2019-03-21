#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleParameterBase(py::object m)
{
    py::class_< UParticleModuleParameterBase,  UParticleModule   >(m, "UParticleModuleParameterBase")
        .def("StaticClass", &UParticleModuleParameterBase::StaticClass, py::return_value_policy::reference)
          ;
}