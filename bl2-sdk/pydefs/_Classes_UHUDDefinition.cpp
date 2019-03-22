#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDDefinition(py::module &m)
{
    py::class_< UHUDDefinition,  UGBXDefinition   >(m, "UHUDDefinition")
        .def_readwrite("MaxDamageIndicators", &UHUDDefinition::MaxDamageIndicators)
        .def_readwrite("DamageIndicatorLifetime", &UHUDDefinition::DamageIndicatorLifetime)
        .def_readwrite("ItemCardAwarenessRange", &UHUDDefinition::ItemCardAwarenessRange)
        .def_readwrite("PickupRange", &UHUDDefinition::PickupRange)
        .def_readwrite("CompassIconScaleMax", &UHUDDefinition::CompassIconScaleMax)
        .def_readwrite("CompassIconScaleMin", &UHUDDefinition::CompassIconScaleMin)
        .def_readwrite("CompassIconScaleMaxRange", &UHUDDefinition::CompassIconScaleMaxRange)
        .def_readwrite("CompassIconScaleMinRange", &UHUDDefinition::CompassIconScaleMinRange)
        .def_readwrite("CustomAttributePresentation", &UHUDDefinition::CustomAttributePresentation)
        .def_readwrite("MaximumPainRotation", &UHUDDefinition::MaximumPainRotation)
        .def_readwrite("MaximumPainOffset", &UHUDDefinition::MaximumPainOffset)
        .def_readwrite("MaximumPainFOV", &UHUDDefinition::MaximumPainFOV)
        .def_readwrite("MaximumDamage", &UHUDDefinition::MaximumDamage)
        .def_readwrite("PainLength", &UHUDDefinition::PainLength)
        .def_readwrite("LevelTimerDefinition", &UHUDDefinition::LevelTimerDefinition)
        .def_readwrite("HUDMovieDefinition", &UHUDDefinition::HUDMovieDefinition)
        .def_readwrite("StatusMenuDefinition", &UHUDDefinition::StatusMenuDefinition)
        .def_readwrite("QUICKSLOT_SELECTED", &UHUDDefinition::QUICKSLOT_SELECTED)
        .def_readwrite("QUICKSLOT_LOCKED", &UHUDDefinition::QUICKSLOT_LOCKED)
        .def_readwrite("QUICKSLOT_AVAILABLE", &UHUDDefinition::QUICKSLOT_AVAILABLE)
        .def_readwrite("P1QuickSlotTextures", &UHUDDefinition::P1QuickSlotTextures)
        .def_readwrite("P2QuickSlotTextures", &UHUDDefinition::P2QuickSlotTextures)
        .def_readwrite("QUICKSLOT_TEX_WIDTH", &UHUDDefinition::QUICKSLOT_TEX_WIDTH)
        .def_readwrite("QUICKSLOT_TEX_HEIGHT", &UHUDDefinition::QUICKSLOT_TEX_HEIGHT)
        .def_readwrite("P1ItemCardTexture", &UHUDDefinition::P1ItemCardTexture)
        .def_readwrite("P2ItemCardTexture", &UHUDDefinition::P2ItemCardTexture)
        .def_readwrite("PlayerNameBone", &UHUDDefinition::PlayerNameBone)
        .def_readwrite("PlayerNameHeightOffset", &UHUDDefinition::PlayerNameHeightOffset)
        .def_readwrite("HealthAnimationTime", &UHUDDefinition::HealthAnimationTime)
        .def_readwrite("AutosaveAkEvent", &UHUDDefinition::AutosaveAkEvent)
          ;
}