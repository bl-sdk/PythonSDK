#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleColorBase(py::module &m)
{
    py::class_< UParticleModuleColorBase,  UParticleModule   >(m, "UParticleModuleColorBase")
		.def_static("StaticClass", &UParticleModuleColorBase::StaticClass, py::return_value_policy::reference)
          ;
}