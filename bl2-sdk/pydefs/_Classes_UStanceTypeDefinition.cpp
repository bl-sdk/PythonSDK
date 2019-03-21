#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStanceTypeDefinition()
{
    class_< UStanceTypeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UStanceTypeDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UStanceTypeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("MovementStyle", &UStanceTypeDefinition::MovementStyle)
        .def_readwrite("SpeedScale", &UStanceTypeDefinition::SpeedScale)
        .def_readwrite("RotationScale", &UStanceTypeDefinition::RotationScale)
        .def_readwrite("JumpNodeCostMultiplier", &UStanceTypeDefinition::JumpNodeCostMultiplier)
        .def_readwrite("Turns", &UStanceTypeDefinition::Turns)
        .def_readwrite("AimOffsetName", &UStanceTypeDefinition::AimOffsetName)
        .def_readwrite("FlinchOverrides", &UStanceTypeDefinition::FlinchOverrides)
        .def_readwrite("BehaviorProviderDefinition", &UStanceTypeDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UStanceTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnExitStance", &UStanceTypeDefinition::OnExitStance)
        .def("OnEnterStance", &UStanceTypeDefinition::OnEnterStance)
        .def("SetBehaviorProviderDefinition", &UStanceTypeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UStanceTypeDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}