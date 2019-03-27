#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataTrail2(py::module &m)
{
    py::class_< UParticleModuleTypeDataTrail2,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataTrail2")
		.def_static("StaticClass", &UParticleModuleTypeDataTrail2::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataTrail2::TessellationFactor)
        .def_readwrite("TessellationFactorDistance", &UParticleModuleTypeDataTrail2::TessellationFactorDistance)
        .def_readwrite("TessellationStrength", &UParticleModuleTypeDataTrail2::TessellationStrength)
        .def_readwrite("TextureTile", &UParticleModuleTypeDataTrail2::TextureTile)
        .def_readwrite("Sheets", &UParticleModuleTypeDataTrail2::Sheets)
        .def_readwrite("MaxTrailCount", &UParticleModuleTypeDataTrail2::MaxTrailCount)
        .def_readwrite("MaxParticleInTrailCount", &UParticleModuleTypeDataTrail2::MaxParticleInTrailCount)
          ;
}