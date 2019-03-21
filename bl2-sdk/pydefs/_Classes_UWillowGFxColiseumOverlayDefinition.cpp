#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxColiseumOverlayDefinition()
{
    class_< UWillowGFxColiseumOverlayDefinition, bases< UGFxMovieDefinition >  , boost::noncopyable>("UWillowGFxColiseumOverlayDefinition", no_init)
        .def_readwrite("CurrentRoundCounter", &UWillowGFxColiseumOverlayDefinition::CurrentRoundCounter)
        .def_readwrite("CurrentWaveCounter", &UWillowGFxColiseumOverlayDefinition::CurrentWaveCounter)
        .def_readwrite("MaxRoundCounter", &UWillowGFxColiseumOverlayDefinition::MaxRoundCounter)
        .def_readwrite("HealthModifier", &UWillowGFxColiseumOverlayDefinition::HealthModifier)
        .def_readwrite("DamageModifier", &UWillowGFxColiseumOverlayDefinition::DamageModifier)
        .def_readwrite("ShieldModifier", &UWillowGFxColiseumOverlayDefinition::ShieldModifier)
        .def_readwrite("WaveLabels", &UWillowGFxColiseumOverlayDefinition::WaveLabels)
        .def_readwrite("RefreshInterval", &UWillowGFxColiseumOverlayDefinition::RefreshInterval)
        .def_readwrite("AllRulesDefinition", &UWillowGFxColiseumOverlayDefinition::AllRulesDefinition)
        .def("StaticClass", &UWillowGFxColiseumOverlayDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("EvaluateBalanceFormula", &UWillowGFxColiseumOverlayDefinition::EvaluateBalanceFormula)
        .staticmethod("StaticClass")
  ;
}