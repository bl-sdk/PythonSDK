#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengesScreenGFxObject()
{
    class_< UChallengesScreenGFxObject, bases< UBaseTopLevelPanelGFxObject >  , boost::noncopyable>("UChallengesScreenGFxObject", no_init)
        .def_readwrite("CurrentPanel", &UChallengesScreenGFxObject::CurrentPanel)
        .def_readwrite("BadassPanel", &UChallengesScreenGFxObject::BadassPanel)
        .def_readwrite("ChallengesPanel", &UChallengesScreenGFxObject::ChallengesPanel)
        .def_readwrite("PanelDef", &UChallengesScreenGFxObject::PanelDef)
        .def("StaticClass", &UChallengesScreenGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("Tick", &UChallengesScreenGFxObject::Tick)
        .def("SetTooltipText", &UChallengesScreenGFxObject::SetTooltipText)
        .def("ConfigureForPlayer", &UChallengesScreenGFxObject::ConfigureForPlayer)
        .def("OfferInputKey", &UChallengesScreenGFxObject::OfferInputKey)
        .def("NormalInputKey", &UChallengesScreenGFxObject::NormalInputKey)
        .def("BlockInput", &UChallengesScreenGFxObject::BlockInput)
        .def("DeferInput", &UChallengesScreenGFxObject::DeferInput)
        .def("PanelOnInputKey", &UChallengesScreenGFxObject::PanelOnInputKey)
        .def("SwitchToPanel", &UChallengesScreenGFxObject::SwitchToPanel)
        .def("SwitchFocus", &UChallengesScreenGFxObject::SwitchFocus)
        .def("RestoreState", &UChallengesScreenGFxObject::RestoreState)
        .def("Refresh", &UChallengesScreenGFxObject::Refresh)
        .def("DeinitPanels", &UChallengesScreenGFxObject::DeinitPanels)
        .def("Deinit", &UChallengesScreenGFxObject::Deinit)
        .def("InitPanels", &UChallengesScreenGFxObject::InitPanels)
        .def("AssignPanels", &UChallengesScreenGFxObject::AssignPanels)
        .def("Init", &UChallengesScreenGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}