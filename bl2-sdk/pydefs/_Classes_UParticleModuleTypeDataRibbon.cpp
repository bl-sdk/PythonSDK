#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataRibbon(py::module &m)
{
    py::class_< UParticleModuleTypeDataRibbon,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataRibbon")
		.def_static("StaticClass", &UParticleModuleTypeDataRibbon::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxTessellationBetweenParticles", &UParticleModuleTypeDataRibbon::MaxTessellationBetweenParticles)
        .def_readwrite("SheetsPerTrail", &UParticleModuleTypeDataRibbon::SheetsPerTrail)
        .def_readwrite("MaxTrailCount", &UParticleModuleTypeDataRibbon::MaxTrailCount)
        .def_readwrite("MaxParticleInTrailCount", &UParticleModuleTypeDataRibbon::MaxParticleInTrailCount)
        .def_readwrite("RenderAxis", &UParticleModuleTypeDataRibbon::RenderAxis)
        .def_readwrite("TangentSpawningScalar", &UParticleModuleTypeDataRibbon::TangentSpawningScalar)
        .def_readwrite("TilingDistance", &UParticleModuleTypeDataRibbon::TilingDistance)
        .def_readwrite("DistanceTessellationStepSize", &UParticleModuleTypeDataRibbon::DistanceTessellationStepSize)
        .def_readwrite("TangentTessellationScalar", &UParticleModuleTypeDataRibbon::TangentTessellationScalar)
          ;
}