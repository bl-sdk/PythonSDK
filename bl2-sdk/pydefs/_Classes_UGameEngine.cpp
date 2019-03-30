#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameEngine(py::module &m)
{
    py::class_< UGameEngine,  UEngine   >(m, "UGameEngine")
		.def_static("StaticClass", &UGameEngine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GPendingLevel", &UGameEngine::GPendingLevel)
        .def_readwrite("PendingLevelPlayerControllerClassName", &UGameEngine::PendingLevelPlayerControllerClassName)
        .def_readwrite("LastURL", &UGameEngine::LastURL)
        .def_readwrite("LastRemoteURL", &UGameEngine::LastRemoteURL)
        .def_readwrite("ServerActors", &UGameEngine::ServerActors)
        .def_readwrite("TravelURL", &UGameEngine::TravelURL)
        .def_readwrite("TravelType", &UGameEngine::TravelType)
        .def_readwrite("OnlineSubsystem", &UGameEngine::OnlineSubsystem)
        .def_readwrite("DLCEnumerator", &UGameEngine::DLCEnumerator)
        .def_readwrite("DownloadableContentEnumeratorClassName", &UGameEngine::DownloadableContentEnumeratorClassName)
        .def_readwrite("DevDownloadableContentEnumeratorClassName", &UGameEngine::DevDownloadableContentEnumeratorClassName)
        .def_readwrite("DLCManager", &UGameEngine::DLCManager)
        .def_readwrite("DownloadableContentOfferEnumeratorClassName", &UGameEngine::DownloadableContentOfferEnumeratorClassName)
        .def_readwrite("DLCOfferEnumerator", &UGameEngine::DLCOfferEnumerator)
        .def_readwrite("DownloadableContentManagerClassName", &UGameEngine::DownloadableContentManagerClassName)
        .def_readwrite("AdManager", &UGameEngine::AdManager)
        .def_readwrite("InGameAdManagerClassName", &UGameEngine::InGameAdManagerClassName)
        .def_readwrite("LevelsToLoadForPendingMapChange", &UGameEngine::LevelsToLoadForPendingMapChange)
        .def_readwrite("LoadedLevelsForPendingMapChange", &UGameEngine::LoadedLevelsForPendingMapChange)
        .def_readwrite("PendingMapChangeFailureDescription", &UGameEngine::PendingMapChangeFailureDescription)
        .def_readwrite("MaxDeltaTime", &UGameEngine::MaxDeltaTime)
        .def_readwrite("PendingLevelStreamingStatusUpdates", &UGameEngine::PendingLevelStreamingStatusUpdates)
        .def_readwrite("ObjectReferencers", &UGameEngine::ObjectReferencers)
        .def_readwrite("PackagesToFullyLoad", &UGameEngine::PackagesToFullyLoad)
        .def_readwrite("NamedNetDrivers", &UGameEngine::NamedNetDrivers)
        .def_readwrite("AnimTags", &UGameEngine::AnimTags)
        .def("GetAdManager", &UGameEngine::GetAdManager, py::return_value_policy::reference)
        .def("GetDLCOfferEnumerator", &UGameEngine::GetDLCOfferEnumerator, py::return_value_policy::reference)
        .def("GetDLCManager", &UGameEngine::GetDLCManager, py::return_value_policy::reference)
        .def("GetDLCEnumerator", &UGameEngine::GetDLCEnumerator, py::return_value_policy::reference)
        .def("GetOnlineSubsystem", &UGameEngine::GetOnlineSubsystem, py::return_value_policy::reference)
        .def("DestroyNamedNetDriver", &UGameEngine::DestroyNamedNetDriver)
        .def("CreateNamedNetDriver", &UGameEngine::CreateNamedNetDriver)
          ;
}