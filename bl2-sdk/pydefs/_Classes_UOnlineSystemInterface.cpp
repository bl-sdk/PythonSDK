#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineSystemInterface()
{
    py::class_< UOnlineSystemInterface,  UInterface   >("UOnlineSystemInterface")
        .def("StaticClass", &UOnlineSystemInterface::StaticClass, py::return_value_policy::reference)
        .def("ClearContentChangeDelegateEx", &UOnlineSystemInterface::ClearContentChangeDelegateEx)
        .def("AddContentChangeDelegateEx", &UOnlineSystemInterface::AddContentChangeDelegateEx)
        .def("OnContentChange", &UOnlineSystemInterface::OnContentChange)
        .def("GetLocale", &UOnlineSystemInterface::GetLocale)
        .def("ClearStorageDeviceChangeDelegate", &UOnlineSystemInterface::ClearStorageDeviceChangeDelegate)
        .def("AddStorageDeviceChangeDelegate", &UOnlineSystemInterface::AddStorageDeviceChangeDelegate)
        .def("OnStorageDeviceChange", &UOnlineSystemInterface::OnStorageDeviceChange)
        .def("GetNATType", &UOnlineSystemInterface::GetNATType)
        .def("ClearConnectionStatusChangeDelegate", &UOnlineSystemInterface::ClearConnectionStatusChangeDelegate)
        .def("AddConnectionStatusChangeDelegate", &UOnlineSystemInterface::AddConnectionStatusChangeDelegate)
        .def("OnConnectionStatusChange", &UOnlineSystemInterface::OnConnectionStatusChange)
        .def("IsControllerConnected", &UOnlineSystemInterface::IsControllerConnected)
        .def("ClearControllerChangeDelegate", &UOnlineSystemInterface::ClearControllerChangeDelegate)
        .def("AddControllerChangeDelegate", &UOnlineSystemInterface::AddControllerChangeDelegate)
        .def("OnControllerChange", &UOnlineSystemInterface::OnControllerChange)
        .def("SetNetworkNotificationPosition", &UOnlineSystemInterface::SetNetworkNotificationPosition)
        .def("GetNetworkNotificationPosition", &UOnlineSystemInterface::GetNetworkNotificationPosition)
        .def("ClearExternalUIChangeDelegate", &UOnlineSystemInterface::ClearExternalUIChangeDelegate)
        .def("AddExternalUIChangeDelegate", &UOnlineSystemInterface::AddExternalUIChangeDelegate)
        .def("OnExternalUIChange", &UOnlineSystemInterface::OnExternalUIChange)
        .def("ClearLinkStatusChangeDelegate", &UOnlineSystemInterface::ClearLinkStatusChangeDelegate)
        .def("AddLinkStatusChangeDelegate", &UOnlineSystemInterface::AddLinkStatusChangeDelegate)
        .def("OnLinkStatusChange", &UOnlineSystemInterface::OnLinkStatusChange)
        .def("HasLinkConnection", &UOnlineSystemInterface::HasLinkConnection)
        .staticmethod("StaticClass")
  ;
}