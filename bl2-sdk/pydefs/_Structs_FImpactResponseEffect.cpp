#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FImpactResponseEffect()
{
    class_< FImpactResponseEffect >("FImpactResponseEffect", no_init)
        .def_readwrite("CensoredEffectAlternative", &FImpactResponseEffect::CensoredEffectAlternative)
        .def_readwrite("DamageModifierPercent", &FImpactResponseEffect::DamageModifierPercent)
        .def_readwrite("ImpactEvent", &FImpactResponseEffect::ImpactEvent)
        .def_readwrite("AINoiseLevel", &FImpactResponseEffect::AINoiseLevel)
        .def_readwrite("ParticleTemplate", &FImpactResponseEffect::ParticleTemplate)
        .def_readwrite("MaxEffectDistance", &FImpactResponseEffect::MaxEffectDistance)
        .def_readwrite("DecalMaterials", &FImpactResponseEffect::DecalMaterials)
        .def_readwrite("DecalWidth", &FImpactResponseEffect::DecalWidth)
        .def_readwrite("DecalHeight", &FImpactResponseEffect::DecalHeight)
        .def_readwrite("DecalMinScale", &FImpactResponseEffect::DecalMinScale)
        .def_readwrite("DecalMaxScale", &FImpactResponseEffect::DecalMaxScale)
        .def_readwrite("DecalDepth", &FImpactResponseEffect::DecalDepth)
        .def_readwrite("ImpactFlashLightClass", &FImpactResponseEffect::ImpactFlashLightClass)
        .def_readwrite("EffectParameters", &FImpactResponseEffect::EffectParameters)
  ;
}