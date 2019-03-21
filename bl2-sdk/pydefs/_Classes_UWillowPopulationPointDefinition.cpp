#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointDefinition()
{
    class_< UWillowPopulationPointDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowPopulationPointDefinition", no_init)
        .def_readwrite("VfTable_IIBodyInfoProvider", &UWillowPopulationPointDefinition::VfTable_IIBodyInfoProvider)
        .def_readwrite("VfTable_IIAnimProvider", &UWillowPopulationPointDefinition::VfTable_IIAnimProvider)
        .def_readwrite("AnimMap", &UWillowPopulationPointDefinition::AnimMap)
        .def_readwrite("BodyComposition", &UWillowPopulationPointDefinition::BodyComposition)
        .def_readwrite("LightingBoundsScale", &UWillowPopulationPointDefinition::LightingBoundsScale)
        .def_readwrite("NumVolumeVisibilitySamples", &UWillowPopulationPointDefinition::NumVolumeVisibilitySamples)
        .def_readwrite("ModShadowFadeoutExponent", &UWillowPopulationPointDefinition::ModShadowFadeoutExponent)
        .def_readwrite("ModShadowFadeoutTime", &UWillowPopulationPointDefinition::ModShadowFadeoutTime)
        .def_readwrite("AmbientGlow", &UWillowPopulationPointDefinition::AmbientGlow)
        .def_readwrite("AmbientShadowSourceDirection", &UWillowPopulationPointDefinition::AmbientShadowSourceDirection)
        .def_readwrite("AmbientShadowColor", &UWillowPopulationPointDefinition::AmbientShadowColor)
        .def_readwrite("DominantShadowTransitionStartDistance", &UWillowPopulationPointDefinition::DominantShadowTransitionStartDistance)
        .def_readwrite("DominantShadowTransitionEndDistance", &UWillowPopulationPointDefinition::DominantShadowTransitionEndDistance)
        .def("StaticClass", &UWillowPopulationPointDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAnims", &UWillowPopulationPointDefinition::GetAnims)
        .def("GetPointAnim", &UWillowPopulationPointDefinition::GetPointAnim, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}