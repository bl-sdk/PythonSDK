#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStanceTypeDefinition(py::module &m)
{
    py::class_< UStanceTypeDefinition,  UGBXDefinition   >(m, "UStanceTypeDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UStanceTypeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("MovementStyle", &UStanceTypeDefinition::MovementStyle)
        .def_readwrite("SpeedScale", &UStanceTypeDefinition::SpeedScale)
        .def_readwrite("RotationScale", &UStanceTypeDefinition::RotationScale)
        .def_readwrite("JumpNodeCostMultiplier", &UStanceTypeDefinition::JumpNodeCostMultiplier)
        .def_readwrite("Turns", &UStanceTypeDefinition::Turns)
        .def_readwrite("AimOffsetName", &UStanceTypeDefinition::AimOffsetName)
        .def_readwrite("FlinchOverrides", &UStanceTypeDefinition::FlinchOverrides)
        .def_readwrite("BehaviorProviderDefinition", &UStanceTypeDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UStanceTypeDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnExitStance", &UStanceTypeDefinition::OnExitStance)
        .def("OnEnterStance", &UStanceTypeDefinition::OnEnterStance)
        .def("SetBehaviorProviderDefinition", &UStanceTypeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UStanceTypeDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}