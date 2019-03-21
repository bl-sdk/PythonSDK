#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataAnimTrail()
{
    py::class_< UParticleModuleTypeDataAnimTrail,  UParticleModuleTypeDataBase   >("UParticleModuleTypeDataAnimTrail")
        .def_readwrite("ControlEdgeName", &UParticleModuleTypeDataAnimTrail::ControlEdgeName)
        .def_readwrite("SheetsPerTrail", &UParticleModuleTypeDataAnimTrail::SheetsPerTrail)
        .def_readwrite("TilingDistance", &UParticleModuleTypeDataAnimTrail::TilingDistance)
        .def_readwrite("DistanceTessellationStepSize", &UParticleModuleTypeDataAnimTrail::DistanceTessellationStepSize)
        .def_readwrite("TangentTessellationScalar", &UParticleModuleTypeDataAnimTrail::TangentTessellationScalar)
        .def("StaticClass", &UParticleModuleTypeDataAnimTrail::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}