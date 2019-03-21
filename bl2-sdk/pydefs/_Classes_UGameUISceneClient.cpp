#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameUISceneClient(py::object m)
{
    py::class_< UGameUISceneClient,  UUIRoot   >(m, "UGameUISceneClient")
        .def_readwrite("LatestDeltaTime", &UGameUISceneClient::LatestDeltaTime)
        .def_readwrite("DoubleClickStartTime", &UGameUISceneClient::DoubleClickStartTime)
        .def_readwrite("DoubleClickStartPosition", &UGameUISceneClient::DoubleClickStartPosition)
        .def_readwrite("InitialPressedKeys", &UGameUISceneClient::InitialPressedKeys)
        .def_readwrite("NavAliases", &UGameUISceneClient::NavAliases)
        .def_readwrite("AxisInputKeys", &UGameUISceneClient::AxisInputKeys)
        .def_readwrite("VfTable_FExec", &UUISceneClient::VfTable_FExec)
        .def_readwrite("RenderViewport", &UUISceneClient::RenderViewport)
        .def_readwrite("MousePosition", &UUISceneClient::MousePosition)
        .def_readwrite("DataStoreManager", &UUISceneClient::DataStoreManager)
        .def_readonly("UnknownData00", &UUISceneClient::UnknownData00)
        .def_readwrite("CanvasToScreen", &UUISceneClient::CanvasToScreen)
        .def_readwrite("InvCanvasToScreen", &UUISceneClient::InvCanvasToScreen)
        .def_readwrite("UIScenePostProcess", &UUISceneClient::UIScenePostProcess)
        .def("StaticClass", &UGameUISceneClient::StaticClass, py::return_value_policy::reference)
        .def("FindLocalPlayerIndex", &UGameUISceneClient::FindLocalPlayerIndex)
        .def("NotifyPlayerRemoved", &UGameUISceneClient::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UGameUISceneClient::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UGameUISceneClient::NotifyGameSessionEnded)
        .def("NotifyClientTravel", &UGameUISceneClient::NotifyClientTravel)
        .def("eventPauseGame", &UGameUISceneClient::eventPauseGame)
        .def("CanUnpauseInternalUI", &UGameUISceneClient::CanUnpauseInternalUI)
        .def("RequestInputProcessingUpdate", &UGameUISceneClient::RequestInputProcessingUpdate)
        .def("GetCurrentNetMode", &UGameUISceneClient::GetCurrentNetMode)
        .def("eventInitializeSceneClient", &UUISceneClient::eventInitializeSceneClient)
        .def("GetInverseCanvasToScreen", &UUISceneClient::GetInverseCanvasToScreen)
        .def("GetCanvasToScreen", &UUISceneClient::GetCanvasToScreen)
        .def("IsUIActive", &UUISceneClient::IsUIActive)
          ;
}