#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSystemSettings()
{
    py::class_< UWillowSystemSettings,  UObject   >("UWillowSystemSettings")
        .def_readwrite("SystemOptions", &UWillowSystemSettings::SystemOptions)
        .def_readwrite("SupportedResolutions", &UWillowSystemSettings::SupportedResolutions)
        .def_readwrite("QueuedResolution", &UWillowSystemSettings::QueuedResolution)
        .def_readwrite("ResolutionTimeout", &UWillowSystemSettings::ResolutionTimeout)
        .def_readwrite("ResolutionDlg", &UWillowSystemSettings::ResolutionDlg)
        .def_readwrite("ResolutionTicker", &UWillowSystemSettings::ResolutionTicker)
        .def_readwrite("QueuedWindowMode", &UWillowSystemSettings::QueuedWindowMode)
        .def_readwrite("QueuedVSyncMode", &UWillowSystemSettings::QueuedVSyncMode)
        .def_readwrite("PreviousVSyncMode", &UWillowSystemSettings::PreviousVSyncMode)
        .def("StaticClass", &UWillowSystemSettings::StaticClass, py::return_value_policy::reference)
        .def("UpdateViewDistance", &UWillowSystemSettings::UpdateViewDistance)
        .def("ResetResolution", &UWillowSystemSettings::ResetResolution)
        .def("ConfirmResolution_Clicked", &UWillowSystemSettings::ConfirmResolution_Clicked)
        .def("UpdateResolutionTimer", &UWillowSystemSettings::UpdateResolutionTimer)
        .def("UpdateResolution", &UWillowSystemSettings::UpdateResolution)
        .def("GetWindowModeString", &UWillowSystemSettings::GetWindowModeString)
        .def("Options_VSyncModeDirty", &UWillowSystemSettings::Options_VSyncModeDirty)
        .def("Options_WindowModeDirty", &UWillowSystemSettings::Options_WindowModeDirty)
        .def("Options_ResolutionDirty", &UWillowSystemSettings::Options_ResolutionDirty)
        .def("UpdateSystemOption", &UWillowSystemSettings::UpdateSystemOption)
        .def("UpdateTextureFade", &UWillowSystemSettings::UpdateTextureFade)
        .def("LoadSystemSettings", &UWillowSystemSettings::LoadSystemSettings)
        .staticmethod("StaticClass")
  ;
}