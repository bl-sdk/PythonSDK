#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCameraModifierCrossfade()
{
    class_< UCameraModifierCrossfade, bases< UGearboxCameraModifier >  , boost::noncopyable>("UCameraModifierCrossfade", no_init)
        .def_readwrite("ModifierA", &UCameraModifierCrossfade::ModifierA)
        .def_readwrite("ModifierB", &UCameraModifierCrossfade::ModifierB)
        .def_readwrite("CurModifierNdx", &UCameraModifierCrossfade::CurModifierNdx)
        .def_readwrite("CurBlendWeight", &UCameraModifierCrossfade::CurBlendWeight)
        .def_readwrite("BlendSpeed", &UCameraModifierCrossfade::BlendSpeed)
        .def_readwrite("DebugInset", &UCameraModifierCrossfade::DebugInset)
        .def_readwrite("LerpMode", &UCameraModifierCrossfade::LerpMode)
        .def("StaticClass", &UCameraModifierCrossfade::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoCrossfade", &UCameraModifierCrossfade::DoCrossfade)
        .def("UpdateAllLerps", &UCameraModifierCrossfade::UpdateAllLerps)
        .def("ModifyCamera", &UCameraModifierCrossfade::ModifyCamera)
        .def("ProcessCameraBlend", &UCameraModifierCrossfade::ProcessCameraBlend)
        .def("InitializeSubModifiers", &UCameraModifierCrossfade::InitializeSubModifiers)
        .def("eventEnableModifier", &UCameraModifierCrossfade::eventEnableModifier)
        .staticmethod("StaticClass")
  ;
}