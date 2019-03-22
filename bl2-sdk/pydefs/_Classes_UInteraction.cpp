#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteraction(py::module &m)
{
    py::class_< UInteraction,  UObject   >(m, "UInteraction")
        .def_readwrite("BadCapsLocContexts", &UUIRoot::BadCapsLocContexts)
        .def("StaticClass", &UInteraction::StaticClass, py::return_value_policy::reference)
        .def("NotifyPlayerRemoved", &UInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UInteraction::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UInteraction::NotifyGameSessionEnded)
        .def("Initialized", &UInteraction::Initialized)
        .def("Oninitialize", &UInteraction::Oninitialize)
        .def("Init", &UInteraction::Init)
        .def("eventPostRender", &UInteraction::eventPostRender)
        .def("eventTick", &UInteraction::eventTick)
        .def("OnReceivedNativeInputChar", &UInteraction::OnReceivedNativeInputChar)
        .def("OnReceivedNativeInputAxis", &UInteraction::OnReceivedNativeInputAxis)
        .def("OnReceivedNativeInputKey", &UInteraction::OnReceivedNativeInputKey)
        .def("SafeCaps", &UUIRoot::SafeCaps)
        .def("GetOnlinePlayerInterfaceEx", &UUIRoot::GetOnlinePlayerInterfaceEx, py::return_value_policy::reference)
        .def("GetOnlinePlayerInterface", &UUIRoot::GetOnlinePlayerInterface, py::return_value_policy::reference)
        .def("GetOnlineGameInterface", &UUIRoot::GetOnlineGameInterface, py::return_value_policy::reference)
        .def("GetDataStoreStringValue", &UUIRoot::GetDataStoreStringValue)
        .def("GetDataStoreFieldValue", &UUIRoot::GetDataStoreFieldValue)
        .def("SetDataStoreStringValue", &UUIRoot::SetDataStoreStringValue)
        .def("SetDataStoreFieldValue", &UUIRoot::SetDataStoreFieldValue)
        .def("StaticResolveDataStore", &UUIRoot::StaticResolveDataStore, py::return_value_policy::reference)
        .def("GetSceneClient", &UUIRoot::GetSceneClient, py::return_value_policy::reference)
        .def("GetCurrentUIController", &UUIRoot::GetCurrentUIController, py::return_value_policy::reference)
        .def("GetInputPlatformType", &UUIRoot::GetInputPlatformType)
          ;
}