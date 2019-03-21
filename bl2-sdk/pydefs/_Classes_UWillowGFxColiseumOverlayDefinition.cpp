#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxColiseumOverlayDefinition(py::object m)
{
    py::class_< UWillowGFxColiseumOverlayDefinition,  UGFxMovieDefinition   >(m, "UWillowGFxColiseumOverlayDefinition")
        .def_readwrite("CurrentRoundCounter", &UWillowGFxColiseumOverlayDefinition::CurrentRoundCounter)
        .def_readwrite("CurrentWaveCounter", &UWillowGFxColiseumOverlayDefinition::CurrentWaveCounter)
        .def_readwrite("MaxRoundCounter", &UWillowGFxColiseumOverlayDefinition::MaxRoundCounter)
        .def_readwrite("HealthModifier", &UWillowGFxColiseumOverlayDefinition::HealthModifier)
        .def_readwrite("DamageModifier", &UWillowGFxColiseumOverlayDefinition::DamageModifier)
        .def_readwrite("ShieldModifier", &UWillowGFxColiseumOverlayDefinition::ShieldModifier)
        .def_readwrite("WaveLabels", &UWillowGFxColiseumOverlayDefinition::WaveLabels)
        .def_readwrite("RefreshInterval", &UWillowGFxColiseumOverlayDefinition::RefreshInterval)
        .def_readwrite("AllRulesDefinition", &UWillowGFxColiseumOverlayDefinition::AllRulesDefinition)
        .def("StaticClass", &UWillowGFxColiseumOverlayDefinition::StaticClass, py::return_value_policy::reference)
        .def("EvaluateBalanceFormula", &UWillowGFxColiseumOverlayDefinition::EvaluateBalanceFormula)
          ;
}