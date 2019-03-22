#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FireBeam(py::module &m)
{
    py::class_< UBehavior_FireBeam,  UBehaviorBase   >(m, "UBehavior_FireBeam")
        .def_readwrite("SourceSocket", &UBehavior_FireBeam::SourceSocket)
        .def_readwrite("SourceOffset", &UBehavior_FireBeam::SourceOffset)
        .def_readwrite("TargetSocket", &UBehavior_FireBeam::TargetSocket)
        .def_readwrite("TargetOffset", &UBehavior_FireBeam::TargetOffset)
        .def_readwrite("TargetContext", &UBehavior_FireBeam::TargetContext)
        .def_readwrite("NumBeams", &UBehavior_FireBeam::NumBeams)
        .def_readwrite("DamagePerSecondFormula", &UBehavior_FireBeam::DamagePerSecondFormula)
        .def_readwrite("MomentumPerSecondFormula", &UBehavior_FireBeam::MomentumPerSecondFormula)
        .def_readwrite("RadiusToDoDamageAroundImpact", &UBehavior_FireBeam::RadiusToDoDamageAroundImpact)
        .def_readwrite("FiringModeDefinition", &UBehavior_FireBeam::FiringModeDefinition)
        .def_readwrite("DamageSource", &UBehavior_FireBeam::DamageSource)
        .def_readwrite("DamageTypeDefinition", &UBehavior_FireBeam::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &UBehavior_FireBeam::ImpactDefinition)
        .def("FillData", &UBehavior_FireBeam::FillData)
        .def("ApplyBehaviorToContext", &UBehavior_FireBeam::ApplyBehaviorToContext)
          ;
}