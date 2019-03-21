#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraModifierCrossfade(py::object m)
{
    py::class_< UCameraModifierCrossfade,  UGearboxCameraModifier   >(m, "UCameraModifierCrossfade")
        .def_readwrite("ModifierA", &UCameraModifierCrossfade::ModifierA)
        .def_readwrite("ModifierB", &UCameraModifierCrossfade::ModifierB)
        .def_readwrite("CurModifierNdx", &UCameraModifierCrossfade::CurModifierNdx)
        .def_readwrite("CurBlendWeight", &UCameraModifierCrossfade::CurBlendWeight)
        .def_readwrite("BlendSpeed", &UCameraModifierCrossfade::BlendSpeed)
        .def_readwrite("DebugInset", &UCameraModifierCrossfade::DebugInset)
        .def_readwrite("LerpMode", &UCameraModifierCrossfade::LerpMode)
        .def("StaticClass", &UCameraModifierCrossfade::StaticClass, py::return_value_policy::reference)
        .def("DoCrossfade", &UCameraModifierCrossfade::DoCrossfade)
        .def("UpdateAllLerps", &UCameraModifierCrossfade::UpdateAllLerps)
        .def("ModifyCamera", &UCameraModifierCrossfade::ModifyCamera)
        .def("ProcessCameraBlend", &UCameraModifierCrossfade::ProcessCameraBlend)
        .def("InitializeSubModifiers", &UCameraModifierCrossfade::InitializeSubModifiers)
        .def("eventEnableModifier", &UCameraModifierCrossfade::eventEnableModifier)
          ;
}