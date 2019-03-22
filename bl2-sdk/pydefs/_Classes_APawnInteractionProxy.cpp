#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APawnInteractionProxy(py::module &m)
{
    py::class_< APawnInteractionProxy,  ATrigger   >(m, "APawnInteractionProxy")
        .def_readwrite("VfTable_IIUsable", &AInteractionProxy::VfTable_IIUsable)
        .def_readwrite("Definition", &AInteractionProxy::Definition)
        .def_readwrite("CostsToUseType", &AInteractionProxy::CostsToUseType)
        .def_readwrite("CostsToSecondaryUseType", &AInteractionProxy::CostsToSecondaryUseType)
        .def_readwrite("CostsToUseAmount", &AInteractionProxy::CostsToUseAmount)
        .def_readwrite("CostsToSecondaryUseAmount", &AInteractionProxy::CostsToSecondaryUseAmount)
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
          ;
}