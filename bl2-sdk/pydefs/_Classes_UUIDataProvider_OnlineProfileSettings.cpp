#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlineProfileSettings(py::object m)
{
    py::class_< UUIDataProvider_OnlineProfileSettings,  UUIDataProvider_OnlinePlayerDataBase   >(m, "UUIDataProvider_OnlineProfileSettings")
        .def_readwrite("Profile", &UUIDataProvider_OnlinePlayerStorage::Profile)
        .def_readwrite("ProviderName", &UUIDataProvider_OnlinePlayerStorage::ProviderName)
        .def_readwrite("PlayerStorageArrayProviders", &UUIDataProvider_OnlinePlayerStorage::PlayerStorageArrayProviders)
        .def_readwrite("DeviceStorageSizeNeeded", &UUIDataProvider_OnlinePlayerStorage::DeviceStorageSizeNeeded)
        .def("StaticClass", &UUIDataProvider_OnlineProfileSettings::StaticClass, py::return_value_policy::reference)
        .def("RefreshStorageData", &UUIDataProvider_OnlineProfileSettings::RefreshStorageData)
        .def("ClearReadCompleteDelegate", &UUIDataProvider_OnlineProfileSettings::ClearReadCompleteDelegate)
        .def("AddReadCompleteDelegate", &UUIDataProvider_OnlineProfileSettings::AddReadCompleteDelegate)
        .def("GetData", &UUIDataProvider_OnlineProfileSettings::GetData)
        .def("WriteData", &UUIDataProvider_OnlineProfileSettings::WriteData)
        .def("ReadData", &UUIDataProvider_OnlineProfileSettings::ReadData)
        .def("OnExternalUIChange", &UUIDataProvider_OnlinePlayerStorage::OnExternalUIChange)
        .def("OnStorageDeviceChange", &UUIDataProvider_OnlinePlayerStorage::OnStorageDeviceChange)
        .def("OnSettingValueUpdated", &UUIDataProvider_OnlinePlayerStorage::OnSettingValueUpdated)
        .def("ArrayProviderPropertyChanged", &UUIDataProvider_OnlinePlayerStorage::ArrayProviderPropertyChanged)
        .def("OnDeviceSelectionComplete", &UUIDataProvider_OnlinePlayerStorage::OnDeviceSelectionComplete)
        .def("ShowDeviceSelection", &UUIDataProvider_OnlinePlayerStorage::ShowDeviceSelection)
        .def("OnLoginChange", &UUIDataProvider_OnlinePlayerStorage::OnLoginChange)
        .def("OnReadStorageComplete", &UUIDataProvider_OnlinePlayerStorage::OnReadStorageComplete)
        .def("eventOnUnregister", &UUIDataProvider_OnlinePlayerStorage::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlinePlayerStorage::eventOnRegister)
          ;
}