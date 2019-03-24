#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataBase(py::module &m)
{
    py::class_< UParticleModuleTypeDataBase,  UParticleModule   >(m, "UParticleModuleTypeDataBase")
		.def_static("StaticClass", &UParticleModuleTypeDataBase::StaticClass, py::return_value_policy::reference)
          ;
}