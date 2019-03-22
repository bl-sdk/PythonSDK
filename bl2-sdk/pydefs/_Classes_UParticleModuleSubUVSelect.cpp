#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVSelect(py::module &m)
{
    py::class_< UParticleModuleSubUVSelect,  UParticleModuleSubUVBase   >(m, "UParticleModuleSubUVSelect")
        .def_readwrite("SubImageSelect", &UParticleModuleSubUVSelect::SubImageSelect)
          ;
}