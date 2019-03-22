#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailBase(py::module &m)
{
    py::class_< UParticleModuleTrailBase,  UParticleModule   >(m, "UParticleModuleTrailBase")
        .def("StaticClass", &UParticleModuleTrailBase::StaticClass, py::return_value_policy::reference)
          ;
}