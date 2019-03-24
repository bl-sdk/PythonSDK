#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUV(py::module &m)
{
    py::class_< UParticleModuleSubUV,  UParticleModule   >(m, "UParticleModuleSubUV")
		.def_static("StaticClass", &UParticleModuleSubUV::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SubImageIndex", &UParticleModuleSubUV::SubImageIndex)
          ;
}