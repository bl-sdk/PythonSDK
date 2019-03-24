#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVBase(py::module &m)
{
    py::class_< UParticleModuleSubUVBase,  UParticleModule   >(m, "UParticleModuleSubUVBase")
		.def_static("StaticClass", &UParticleModuleSubUVBase::StaticClass, py::return_value_policy::reference)
          ;
}