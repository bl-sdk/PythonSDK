#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSystemSettings()
{
    class_< UWillowSystemSettings, bases< UObject >  , boost::noncopyable>("UWillowSystemSettings", no_init)
        .def_readwrite("SystemOptions", &UWillowSystemSettings::SystemOptions)
        .def_readwrite("SupportedResolutions", &UWillowSystemSettings::SupportedResolutions)
        .def_readwrite("QueuedResolution", &UWillowSystemSettings::QueuedResolution)
        .def_readwrite("ResolutionTimeout", &UWillowSystemSettings::ResolutionTimeout)
        .def_readwrite("ResolutionDlg", &UWillowSystemSettings::ResolutionDlg)
        .def_readwrite("ResolutionTicker", &UWillowSystemSettings::ResolutionTicker)
        .def_readwrite("QueuedWindowMode", &UWillowSystemSettings::QueuedWindowMode)
        .def_readwrite("QueuedVSyncMode", &UWillowSystemSettings::QueuedVSyncMode)
        .def_readwrite("PreviousVSyncMode", &UWillowSystemSettings::PreviousVSyncMode)
        .def("StaticClass", &UWillowSystemSettings::StaticClass, return_value_policy< reference_existing_object >())
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