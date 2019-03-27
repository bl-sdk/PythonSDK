#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInteractionProxy(py::module &m)
{
    py::class_< AInteractionProxy,  ATrigger   >(m, "AInteractionProxy")
		.def_static("StaticClass", &AInteractionProxy::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIUsable", &AInteractionProxy::VfTable_IIUsable)
        .def_readwrite("Definition", &AInteractionProxy::Definition)
        .def_readwrite("CostsToUseType", &AInteractionProxy::CostsToUseType)
        .def_readwrite("CostsToSecondaryUseType", &AInteractionProxy::CostsToSecondaryUseType)
        .def_readwrite("CostsToUseAmount", &AInteractionProxy::CostsToUseAmount)
        .def_readwrite("CostsToSecondaryUseAmount", &AInteractionProxy::CostsToSecondaryUseAmount)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AInteractionProxy::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AInteractionProxy::SetInteractionIcon)
        .def("UseObject", &AInteractionProxy::UseObject)
        .def("AllowTouchEvent", &AInteractionProxy::AllowTouchEvent)
        .def("UsedBy", &AInteractionProxy::UsedBy)
        .def("eventUnTouch", &AInteractionProxy::eventUnTouch)
        .def("eventTouch", &AInteractionProxy::eventTouch)
        .def("eventBaseChange", &AInteractionProxy::eventBaseChange)
        .def("eventDestroyed", &AInteractionProxy::eventDestroyed)
        .def("Initialize", &AInteractionProxy::Initialize)
        .def("AllowUseEvent", &AInteractionProxy::AllowUseEvent)
        .def("IsInteractionDebugEnabled", &AInteractionProxy::IsInteractionDebugEnabled)
        .def("ToggleInteractionDebug", &AInteractionProxy::ToggleInteractionDebug)
          ;
}