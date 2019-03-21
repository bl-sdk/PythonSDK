#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUISceneClient()
{
    class_< UUISceneClient, bases< UUIRoot >  , boost::noncopyable>("UUISceneClient", no_init)
        .def_readwrite("VfTable_FExec", &UUISceneClient::VfTable_FExec)
        .def_readwrite("RenderViewport", &UUISceneClient::RenderViewport)
        .def_readwrite("MousePosition", &UUISceneClient::MousePosition)
        .def_readwrite("DataStoreManager", &UUISceneClient::DataStoreManager)
        .def_readonly("UnknownData00", &UUISceneClient::UnknownData00)
        .def_readwrite("CanvasToScreen", &UUISceneClient::CanvasToScreen)
        .def_readwrite("InvCanvasToScreen", &UUISceneClient::InvCanvasToScreen)
        .def_readwrite("UIScenePostProcess", &UUISceneClient::UIScenePostProcess)
        .def("StaticClass", &UUISceneClient::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventInitializeSceneClient", &UUISceneClient::eventInitializeSceneClient)
        .def("GetInverseCanvasToScreen", &UUISceneClient::GetInverseCanvasToScreen)
        .def("GetCanvasToScreen", &UUISceneClient::GetCanvasToScreen)
        .def("IsUIActive", &UUISceneClient::IsUIActive)
        .staticmethod("StaticClass")
  ;
}