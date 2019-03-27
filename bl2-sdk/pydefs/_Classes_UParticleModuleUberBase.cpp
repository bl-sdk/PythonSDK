#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleUberBase(py::module &m)
{
    py::class_< UParticleModuleUberBase,  UParticleModule   >(m, "UParticleModuleUberBase")
		.def_static("StaticClass", &UParticleModuleUberBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RequiredModules", &UParticleModuleUberBase::RequiredModules)
          ;
}