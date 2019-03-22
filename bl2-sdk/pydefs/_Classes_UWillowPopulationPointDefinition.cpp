#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointDefinition(py::module &m)
{
    py::class_< UWillowPopulationPointDefinition,  UGBXDefinition   >(m, "UWillowPopulationPointDefinition")
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
        .def("StaticClass", &UWillowPopulationPointDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetAnims", &UWillowPopulationPointDefinition::GetAnims)
        .def("GetPointAnim", &UWillowPopulationPointDefinition::GetPointAnim, py::return_value_policy::reference)
          ;
}