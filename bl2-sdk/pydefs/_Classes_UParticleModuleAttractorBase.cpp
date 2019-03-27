#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAttractorBase(py::module &m)
{
    py::class_< UParticleModuleAttractorBase,  UParticleModule   >(m, "UParticleModuleAttractorBase")
		.def_static("StaticClass", &UParticleModuleAttractorBase::StaticClass, py::return_value_policy::reference)
          ;
}