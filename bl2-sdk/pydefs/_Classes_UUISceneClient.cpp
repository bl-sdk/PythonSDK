#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUISceneClient(py::object m)
{
    py::class_< UUISceneClient,  UUIRoot   >(m, "UUISceneClient")
        .def_readwrite("VfTable_FExec", &UUISceneClient::VfTable_FExec)
        .def_readwrite("RenderViewport", &UUISceneClient::RenderViewport)
        .def_readwrite("MousePosition", &UUISceneClient::MousePosition)
        .def_readwrite("DataStoreManager", &UUISceneClient::DataStoreManager)
        .def_readwrite("CanvasToScreen", &UUISceneClient::CanvasToScreen)
        .def_readwrite("InvCanvasToScreen", &UUISceneClient::InvCanvasToScreen)
        .def_readwrite("UIScenePostProcess", &UUISceneClient::UIScenePostProcess)
        .def("StaticClass", &UUISceneClient::StaticClass, py::return_value_policy::reference)
        .def("eventInitializeSceneClient", &UUISceneClient::eventInitializeSceneClient)
        .def("GetInverseCanvasToScreen", &UUISceneClient::GetInverseCanvasToScreen)
        .def("GetCanvasToScreen", &UUISceneClient::GetCanvasToScreen)
        .def("IsUIActive", &UUISceneClient::IsUIActive)
          ;
}