#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APawnInteractionProxy()
{
    class_< APawnInteractionProxy, bases< ATrigger >  , boost::noncopyable>("APawnInteractionProxy", no_init)
        .def_readwrite("VfTable_IIUsable", &AInteractionProxy::VfTable_IIUsable)
        .def_readwrite("Definition", &AInteractionProxy::Definition)
        .def_readwrite("CostsToUseType", &AInteractionProxy::CostsToUseType)
        .def_readwrite("CostsToSecondaryUseType", &AInteractionProxy::CostsToSecondaryUseType)
        .def_readwrite("CostsToUseAmount", &AInteractionProxy::CostsToUseAmount)
        .def_readwrite("CostsToSecondaryUseAmount", &AInteractionProxy::CostsToSecondaryUseAmount)
        .def("StaticClass", &APawnInteractionProxy::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOutsideWorldBounds", &APawnInteractionProxy::eventOutsideWorldBounds)
        .def("AllowUseEvent", &APawnInteractionProxy::AllowUseEvent)
        .def("AllowTouchEvent", &APawnInteractionProxy::AllowTouchEvent)
        .def("Initialize", &APawnInteractionProxy::Initialize)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AInteractionProxy::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AInteractionProxy::SetInteractionIcon)
        .def("UseObject", &AInteractionProxy::UseObject)
        .def("UsedBy", &AInteractionProxy::UsedBy)
        .def("eventUnTouch", &AInteractionProxy::eventUnTouch)
        .def("eventTouch", &AInteractionProxy::eventTouch)
        .def("eventBaseChange", &AInteractionProxy::eventBaseChange)
        .def("eventDestroyed", &AInteractionProxy::eventDestroyed)
        .def("IsInteractionDebugEnabled", &AInteractionProxy::IsInteractionDebugEnabled)
        .def("ToggleInteractionDebug", &AInteractionProxy::ToggleInteractionDebug)
        .staticmethod("StaticClass")
  ;
}