#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVSelect()
{
    py::class_< UParticleModuleSubUVSelect,  UParticleModuleSubUVBase   >("UParticleModuleSubUVSelect")
        .def_readwrite("SubImageSelect", &UParticleModuleSubUVSelect::SubImageSelect)
        .def("StaticClass", &UParticleModuleSubUVSelect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}