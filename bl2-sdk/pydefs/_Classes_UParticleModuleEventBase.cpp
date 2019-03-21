#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleEventBase(py::object m)
{
    py::class_< UParticleModuleEventBase,  UParticleModule   >(m, "UParticleModuleEventBase")
        .def("StaticClass", &UParticleModuleEventBase::StaticClass, py::return_value_policy::reference)
          ;
}