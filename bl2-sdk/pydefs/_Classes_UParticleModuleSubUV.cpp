#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUV()
{
    py::class_< UParticleModuleSubUV,  UParticleModule   >("UParticleModuleSubUV")
        .def_readwrite("SubImageIndex", &UParticleModuleSubUV::SubImageIndex)
        .def("StaticClass", &UParticleModuleSubUV::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}